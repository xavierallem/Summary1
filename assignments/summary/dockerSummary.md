# Docker

 ![Docker](assignments/summary/Assets/1_ovRuAuqPf4r2xpiWh71rUg.png)


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



