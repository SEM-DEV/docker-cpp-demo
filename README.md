# C++ Demo

A minimal Docker image demonstrating how to compile and run a simple C++ program.

## Build it locally

```bash
docker build -t cpp-demo .
```
## Run it locally

```bash
docker run --rm cpp-demo
```
## Expected output:

```bash
Hello!
Number of CPU cores: 4
```

## Pull

```bash
docker pull semdevinc/cpp-demo
```

## Run

```bash
docker run -it --rm semdevinc/cpp-demo
```

## Files

- Dockerfile
- main.cpp
- run.sh
