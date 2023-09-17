list (APPEND EXAM_SOURCES
    run_example.cpp
    boost_function.cpp
    boost_asio_timer.cpp
    boost_asio_strand.cpp
    boost_thread_pool.cpp
    boost_lockfree_queue.cpp
    boost_queue_demo.cpp
)

ADD_EXECUTABLE(run_example ${EXAM_SOURCES})
TARGET_LINK_LIBRARIES( run_example LINK_PUBLIC ${Boost_LIBRARIES} )