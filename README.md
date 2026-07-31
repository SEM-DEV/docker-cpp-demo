# C++ Demo

A minimal Docker image demonstrating how to compile and run a simple C++ program inside an Ubuntu-based container.

## Features

- Ubuntu 22.04 environment
- GNU C++ compiler (`g++`)
- Simple C++ example
- Displays the number of available CPU cores

## Build locally

```bash
docker build -t cpp-demo .
```

## Run locally

```bash
docker run --rm cpp-demo
```

## Expected output

```text
Hello!
Number of CPU cores: 4
```

> The reported number of CPU cores depends on your system and Docker configuration.

## Pull from Docker Hub

```bash
docker pull semdevinc/cpp-demo
```

## Run the published image

```bash
docker run --rm semdevinc/cpp-demo
```

## Repository structure

- `Dockerfile` – Builds the Docker image.
- `main.cpp` – Simple C++ example application.
- `run.sh` – Compiles and executes the application.

## Docker Hub

https://hub.docker.com/r/semdevinc/cpp-demo

## License

MIT
