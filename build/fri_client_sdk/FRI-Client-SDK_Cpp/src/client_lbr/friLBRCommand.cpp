/**

The following license terms and conditions apply, unless a redistribution
agreement or other license is obtained by KUKA Roboter GmbH, Augsburg, Germany.

SCOPE

The software �KUKA Sunrise.Connectivity FRI Client SDK� is targeted to work in
conjunction with the �KUKA Sunrise.Connectivity FastRobotInterface� toolkit.
In the following, the term �software� refers to all material directly
belonging to the provided SDK �Software development kit�, particularly source
code, libraries, binaries, manuals and technical documentation.

COPYRIGHT

All Rights Reserved
Copyright (C)  2014-2019 
KUKA Roboter GmbH
Augsburg, Germany

LICENSE 

Redistribution and use of the software in source and binary forms, with or
without modification, are permitted provided that the following conditions are
met:
a) The software is used in conjunction with KUKA products only. 
b) Redistributions of source code must retain the above copyright notice, this
list of conditions and the disclaimer.
c) Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the disclaimer in the documentation and/or other
materials provided with the distribution. Altered source code of the
redistribution must be made available upon request with the distribution.
d) Modification and contributions to the original software provided by KUKA
must be clearly marked and the authorship must be stated.
e) Neither the name of KUKA nor the trademarks owned by KUKA may be used to
endorse or promote products derived from this software without specific prior
written permission.

DISCLAIMER OF WARRANTY

The Software is provided "AS IS" and "WITH ALL FAULTS," without warranty of
any kind, including without limitation the warranties of merchantability,
fitness for a particular purpose and non-infringement. 
KUKA makes no warranty that the Software is free of defects or is suitable for
any particular purpose. In no event shall KUKA be responsible for loss or
damages arising from the installation or use of the Software, including but
not limited to any indirect, punitive, special, incidental or consequential
damages of any character including, without limitation, damages for loss of
goodwill, work stoppage, computer failure or malfunction, or any and all other
commercial damages or losses. 
The entire risk to the quality and performance of the Software is not borne by
KUKA. Should the Software prove defective, KUKA is not liable for the entire
cost of any service and repair.



\file
\version {1.15}
*/
#include "friLBRState.h"
#include "friLBRCommand.h"
#include "friClientData.h"
#include "pb_frimessages_callbacks.h"

using namespace KUKA::FRI;

//******************************************************************************
void LBRCommand::setJointPosition(const double* values)
{
   _cmdMessage->has_commandData = true;
   _cmdMessage->commandData.has_jointPosition = true;
   tRepeatedDoubleArguments *dest =
            (tRepeatedDoubleArguments*)_cmdMessage->commandData.jointPosition.value.arg;
   memcpy(dest->value, values, LBRState::NUMBER_OF_JOINTS * sizeof(double));
}

//******************************************************************************
void LBRCommand::setWrench(const double* wrench)
{
   _cmdMessage->has_commandData = true;
   _cmdMessage->commandData.has_cartesianWrenchFeedForward = true;

   double *dest = _cmdMessage->commandData.cartesianWrenchFeedForward.element;
   memcpy(dest, wrench, 6 * sizeof(double));
}
//******************************************************************************
void LBRCommand::setTorque(const double* torques)
{
   _cmdMessage->has_commandData = true;
   _cmdMessage->commandData.has_jointTorque= true;

   tRepeatedDoubleArguments *dest =
              (tRepeatedDoubleArguments*)_cmdMessage->commandData.jointTorque.value.arg;
   memcpy(dest->value, torques, LBRState::NUMBER_OF_JOINTS * sizeof(double));
}

//******************************************************************************
void LBRCommand::setBooleanIOValue(const char* name, const bool value)
{
   ClientData::setBooleanIOValue(_cmdMessage, name, value, _monMessage);
}

//******************************************************************************
void LBRCommand::setAnalogIOValue(const char* name, const double value)
{
   ClientData::setAnalogIOValue(_cmdMessage, name, value, _monMessage);
}

//******************************************************************************
void LBRCommand::setDigitalIOValue(const char* name, const unsigned long long value)
{
   ClientData::setDigitalIOValue(_cmdMessage, name, value, _monMessage);
}
