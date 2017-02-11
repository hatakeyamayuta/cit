project(ipl)

FIND_PACKAGE(OpenCV)
add_executable(ipl
	iplimage.cpp
	iplchange.cpp
)
target_link_libraries(ipl
	${OpenCV_LIBS}
	)
