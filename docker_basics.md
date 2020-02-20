# Index
1. Docker Terminologies
2. Docker Components
3. Docker Installation (ubuntu16.04)
4. Docker Basic Command
5. Creating Docker application

# Docker Terminologies
## 1. Docker
   * Docker is a platform for developers and system admins to develop, deploy, and run applications with containers.
   * Docker supports multiple applications with different application requirements and dependencies, to be hosted together on the same host, as long as they have the same operating system requirements.

## 2. Docker v/s Virtual machine
![image](/uploads/ea3b6d3f450879a4da41bdb235e2f529/image.png)

  * Containers are containing the binaries, libraries, and the application itself. Containers do not contain a guest operating system which ensures that containers are lightweight.
  * In contrast, the virtual machine is running on the hypervisor(responsible to run virtual machines) including its own operating system which makes it significantly large. Hence it makes virtual machine complex to set and takes more resources.

## 3. Docker Image
   * A Docker image is containing everything needed to run an application as a container. This includes:
     * code
     * runtime
     * libraries
     * environment variables
     * configuration files
   * The image can then be deployed to any Docker environment and executable as a container.

## 4. Container
   * A Docker container is a runtime instance of an image.
   * From one image you can create multiple containers (all running the sample application) on multiple Docker platforms. 
   * You can create multiple containers for multiple applications in a docker.

## 5. Docker file
   * Docker images are a set of instructions used to create docker containers. Docker image is created using a docker file.

# Docker Components
## Docker Engine
  * Docker Engine is one of the core components of Docker. It is responsible for the overall functioning of the Docker platform.
  * Docker Engine is a client-server based application and consists of 3 main components.
    * Server: It is responsible for creating and managing Docker Images, Containers, Networks and Volumes on the Docker platform.
    * REST API: The REST API specifies how the applications can interact with the Server, and instruct it to get their job done.
    * Client: The Client is nothing but a command-line interface, that allows users to interact with Docker using the commands.

![image](/uploads/b9c35944c61a9d15a0dbd895a00b36f8/image.png)

## Docker Hub
Docker Hub is the official online repository where you could find all the Docker Images that are available for us to use.

# Docker Installation (ubuntu16.04)

1. Uninstall the older version of docker if is already installed
```
$ sudo apt-get remove docker docker-engine docker.io containerd runc
```

2. Installing CE (Community Docker Engine)
```
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

[Referred link](https://docs.docker.com/install/linux/docker-ce/ubuntu/)


# 1. Docker basic command
[Referred link](https://medium.com/free-code-camp/docker-simplified-96639a35ff36#06d9)
## docker create
  * This command allows us to create a new container.
  * Syntax
```
docker create [options] IMAGE [commands] [arguments]
```
`Note: Anything enclosed within the square brackets is optional.`

e.g.
```
$ docker create fedora

02576e880a2ccbb4ce5c51032ea3b3bb8316e5b626861fc87d28627c810af03
```
In the above example, the docker create command would create a new container using the latest Fedora image.

if container creation is successful the command will return `unique container ID`, in above example it `02576e880a2ccbb4ce5c51032ea3b3bb8316e5b626861fc87d28627c810af03`. We refer to the container using it's container ID.

Refer given link for more details.

## docker ps
  * The docker ps command allows us to view all the containers that are running on the Docker Host.
```
$ docker ps

CONTAINER ID IMAGE  COMMAND CREATED        STATUS            PORTS NAMES
30986b73dc00 ubuntu "bash"  45 minutes ago Up About a minute                 elated_franklin
```

docker ps output details

  * **CONTAINER ID:** A unique string consisting of alphanumeric characters, associated with each container.

  * **IMAGE:** Name of the Docker Image used to create this container.

  * **COMMAND:** Any application-specific command(s) that needs to be executed when the container is started.

  * **CREATED:** This shows the time elapsed since this container has been created.

  * **STATUS:** This shows the current status of the container, along with the time elapsed, in its present state.
  * **PORTS:** This displays any port mappings defined for the container.
  * **Names:** Apart from the CONTAINER ID, each container is also assigned a unique name. We can refer to a container either using its container ID or its unique name. 

## docker start
  * This command starts any stopped container(s).
  * Syntax
```
$ docker start [options] CONTAINER ID/NAME [CONTAINER ID/NAME…]
```
  * Example
```
$ docker start 30986
```
In the above example, Docker starts the container beginning with the container ID 30986.
```
$ docker start sneha
```
Whereas in this example, Docker starts the container named sneha.

## docker stop
 * This command stops any running container(s).
 * Syntax
```
$ docker stop [options] CONTAINER ID/NAME [CONTAINER ID/NAME…]
```
 * Example
```
$ docker stop 30986
```
In the above example, Docker will stop the container beginning with the container ID 30986.
```
$ docker stop sneha
```
Whereas in this example, Docker will stop the container named sneha.

## docker restart
## docker run
## docker rm


## Creating an application
1. Create a folder with these 2 files inside it `Dockerfile` and `main.py`. Normally you should have this folder structure.
```
.
├── Dockerfile
└── main.py
0 directories, 2 files
```
2. Edit main.py
```
#!/usr/bin/env python3

print("Docker is magic!")
```
3. Edit Dockerfile
```
# A dockerfile must always start by importing the base image.
# We use the keyword 'FROM' to do that.
# In our example, we want import the python image.
# So we write 'python' for the image name and 'latest' for the version.
FROM python:latest

# In order to launch our python code, we must import it into our image.
# We use the keyword 'COPY' to do that.
# The first parameter 'main.py' is the name of the file on the host.
# The second parameter '/' is the path where to put the file on the image.
# Here we put the file at the image root folder.
COPY main.py /

# We need to define the command to launch when we are going to run the image.
# We use the keyword 'CMD' to do that.
# The following command will execute "python ./main.py".
CMD [ "python", "./main.py" ]
```
4. Create the Docker image
   * Once your code is ready and the Dockerfile is written, all you have to do is create your image to contain your application.
```
$ docker build -t python-test . 
```
   * The ’-t’ option allows you to define the name of your image. In our case we have chosen ’python-test’ but you can put what you want.

5.  Run the Docker image
   * Once the image is created, your code is ready to be launched.
```
$ docker run python-test
```
   * You need to put the name of your image after `docker run`.
That’s it. You should normally see “Docker is magic!” displayed in your terminal.

## Push your image on Dockerhub
[Referred link](https://medium.com/@deepakshakya/beginners-guide-to-use-docker-build-run-push-and-pull-4a132c094d75)

1. Create Dockerhub account
2. Create Repository
![createrepo](extras/createrepo.png)

Click on Create Repository button, put the name and enter.
![repo2](extras/repo2.png)

3. Now we will tag the image and push it to dockerhub repository which we just created.
```
# Run this commend to list docker images
$ docker images
```
which will give you this list
```
REPOSITORY                 TAG                 IMAGE ID            CREATED             SIZE
snehabhapkar/python-test   latest              c7857f97ebbd        2 hours ago         933MB
```
Image ID is used to tag the image. So lets tag syntax is `docker tag <image-id of docker-whale> <your dockerhub username>/docker-whale:latest`
```
$ docker tag c7857f97ebbd snehabhapkar/python-test:latest
# Push image to the repository
$ docker push snehabhapkar/python-test
```

## Pull and run the image

1. Let’s remove all versions of python-test image on our local system. Use Image ID to do that.
```
$ docker rmi -f c7857f97ebbd
```

2. Lets run the image, if it doesn't find it on local machine, it fetched it from dockerhub and run.
```
$ docker run snehabhapkar/python-test
```
This will give the desired output.

# [Summarize here](https://gitlab.iotiot.in/newbies/orientation/issues/3)
