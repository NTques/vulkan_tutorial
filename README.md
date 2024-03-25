# vulkan_tutorial

This repository is a guide on how to render 3D graphics using the Vulkan SDK on Linux.

### Setup Environment

#### Install Vulkan SDK
~~~
wget -qO - http://packages.lunarg.com/lunarg-signing-key-pub.asc | sudo apt-key add -

sudo wget -qO /etc/apt/sources.list.d/lunarg-vulkan-1.2.131-bionic.list http://packages.lunarg.com/vulkan/1.2.131/lunarg-vulkan-1.2.131-bionic.list

sudo apt update

sudo apt install vulkan-sdk
~~~

