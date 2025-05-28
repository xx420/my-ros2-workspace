from setuptools import find_packages
from setuptools import setup

setup(
    name='mocap4r2_control_msgs',
    version='0.0.7',
    packages=find_packages(
        include=('mocap4r2_control_msgs', 'mocap4r2_control_msgs.*')),
)
