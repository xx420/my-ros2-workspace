from setuptools import find_packages, setup

package_name = 'marker_robot_follower'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rosuser',
    maintainer_email='imtiajsayem5@gmail.com',
    description='Relays marker pose to the robot via MoveIt',  # ← UPDATED
    license='TODO: License declaration',  # ← LEFT AS IS
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'marker_robot_follower = marker_robot_follower.marker_robot_follower:main',  # ← ADDED
        ],
    },
)

