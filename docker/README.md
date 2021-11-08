To build:

```bash
# Prepare dependencies
docker build . -f Dockerfile.centos -t hexl-centos

# Run interactive prompt
docker run --rm -it --entrypoint bash hexl-centos

# Clone HEXL and build via normal build instructions...
```
