# Example of creating a Docker container with the Docker SDK for Python
import docker

client = docker.from_env()
image = client.images.pull('nginx')
container = client.containers.run(image, detach=True)
print(container.id)
