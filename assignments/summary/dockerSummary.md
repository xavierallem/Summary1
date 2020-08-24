# Docker

 ![](assignments/summary/Assets/1_ovRuAuqPf4r2xpiWh71rUg.png)


**Docker** is a tool designed to make it easier to create, deploy, and run applications by using containers. 
Containers allow a developer to package up an application with all of the parts it needs, such as libraries and other dependencies, and deploy it as one package.


## Docker Architecture

Docker uses a client-server architecture. The Docker client talks to the Docker daemon, which does the heavy lifting of building, running, and distributing your Docker containers. The Docker client and daemon can run on the same system, or you can connect a Docker client to a remote Docker daemon. 
The Docker client and daemon communicate using a REST API, over UNIX sockets or a network interface.

![Docker](assignments/summary/Assets/Docker_Architecture.png)

- **Docker client**:- Primary user interface for the Docker daemon. It accepts commands from the user and communicates with the Docker daemon.
- **Docker container**:- Created from an image and is the run time component of Docker. A container holds everything that is needed for an application instance or an instance group to run, including an operating system,
user-added files, meta-data, and other dependencies.
- **Docker daemon**:- Builds, runs, and manages Docker containers on a host machine.
- **Docker image**:- A read-only template for creating containers. An image contains the installations of an application instance or an instance group with its software and dependencies, 
and the process to run when the container is launched.
- **Docker registries**:- Repositories of images for users to upload or download. Registries can be public or private. The public Docker registry is called the Docker Hub. 

## Why Docker?
- Flexible
- Lightweight
- Portable
- Loosely coupled
- Scalable
- Secure



## Why Docker over VM?

- **Container**:-  Containers are isolated , build on top of the host operating system's kernel , and contain only apps and some lightweight operating system APIs and services that run in user mode, as shown in this diagram.

![Docker](assignments/summary/Assets/container-diagram.png)

- **Virtual Machine**:- In contrast to containers, VMs run a complete operating system–including its own kernel

![Docker](assignments/summary/Assets/virtual-machine-diagram.png)


## Installing Docker 

1. Uninstall the older version of docker if is already installed.
```bash
$ sudo apt-get remove docker docker-engine docker.io containerd runc
```
    
2. Set up the repository
```bash
$ sudo apt-get update
$ sudo apt-get install \
    apt-transport-https \
    ca-certificates \
    curl \
    gnupg-agent \
    software-properties-common
$ curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
$ sudo apt-key fingerprint 0EBFCD88
$ sudo add-apt-repository \
   "deb [arch=amd64] https://download.docker.com/linux/ubuntu \
   $(lsb_release -cs) \
   stable nightly test"
$ sudo apt-get update
$ sudo apt-get install docker-ce docker-ce-cli containerd.io

// Check if docker is successfully installed in your system
$ sudo docker run hello-world

```

## Basic Commands

- **docker start**:- This command starts any stopped container(s).
```bash
$ docker start
```
- **docker stop**:- This command stops any running container(s).
```bash
$ docker stop
```
- **docker run**:- This command creates containers from docker images.
```bash
$ docker run
```
- **docker rm**:- This command is used to delete a stopped container.
```bash
$ docker rm
```
- **docker rmi**:- This command is used to delete an image from local storage.
```bash
$ docker rmi
```
- **docker pull**:- This command is used to pull images from the docker repository
```bash
$ docker pull
```
- **docker ps**:- This command is used to list the running containers.
```bash
$ docker ps
```
- **docker exec**:-  Runs a new command in a running container.COMMAND should be an executable. Here e0b72ff850f8 is the containerID.
```bash
docker exec -it e0b72ff850f8 chmod +x requirements.sh  
docker exec -it e0b72ff850f8 /bin/bash ./requirements.sh
docker start e0b72ff850f8
docker exec e0b72ff850f8 python3 hello.py

```
- **docker kill**:-This command kills the container by stopping its execution immediately.
```bash
$ docker kill
```
- **docker commit  <username/imagename>**:- This command creates a new image of an edited container on the local system
```bash
$ docker commit  <username/imagename>
```
- **docker login**:- his command is used to login to the docker hub repository
```bash
$ docker login
```
- **docker push <username/image name>**:- This command is used to push an image to the docker hub repository
```bash
$ docker push <username/image name>
```
- **docker images**:- This command lists all the locally stored docker images.
```bash
$ docker images
```
- **docker build**:- This command is used to build an image from a specified docker file.
```bash
$ docker build
```






