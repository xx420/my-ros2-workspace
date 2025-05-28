from setuptools import find_packages, setup

package_name = 'marker_pose_publisher_pkg'

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
    description='Publishes corrected marker pose from mocap data',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'marker_pose_publisher = marker_pose_publisher_pkg.marker_pose_publisher:main',
        ],
    },
)

