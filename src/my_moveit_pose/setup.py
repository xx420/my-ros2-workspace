from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'my_moveit_pose'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Add the following line to install all .launch.py files in your launch folder
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rosuser',
    maintainer_email='imtiajsayem5@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'move_to_pose = my_moveit_pose.move_to_pose:main',
                'track_motive_pose = my_moveit_pose.track_motive_pose:main',

        ],
    },
)
