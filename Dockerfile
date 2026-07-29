FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y g++

WORKDIR /workspace

COPY . .

CMD ["./run.sh"]
