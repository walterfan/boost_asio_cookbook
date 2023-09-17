
# asio 执行上下文

All programs that use asio need to have at least one I/O execution context, such as an io_context or thread_pool object. 

An I/O execution context provides access to I/O functionality. We declare an object of type io_context first thing in the main function.


Using asio's asynchronous functionality means supplying a completion token, which determines how the result will be delivered to a completion handler when an asynchronous operation completes.

# asio run

The asio library provides a guarantee that completion handlers will only be called from threads that are currently calling io_context::run(). 

Therefore unless the io_context::run() function is called the completion handler for the asynchronous wait completion will never be invoked.

The io_context::run() function will also continue to run while there is still "work" to do. In this example, the work is the asynchronous wait on the timer, so the call will not return until the timer has expired and the completion handler has returned.

It is important to remember to give the io_context some work to do before calling io_context::run(). For example, if we had omitted the above call to steady_timer::async_wait(), the io_context would not have had any work to do, and consequently io_context::run() would have returned immediately.