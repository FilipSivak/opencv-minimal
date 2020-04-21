build:
	docker build -t opencv-minimal .

run:
	docker run -it \
	--mount type=bind,source=`pwd`,target=/out \
	opencv-minimal

