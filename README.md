The Speedmetrix (SMX) Agent is a small footprint library and standalone app for multiple operating systems. The Agent components are designed to offload measurement of Edge Computing performance gain metrics from client apps. Data collection and Presentation of the same with analytics are presented to Network Engineers as and when needed on the SpeedMetrix Server dashboard.

The Client side agent consists of the two following components

> A standalone app that continuosly monitors Round Trip and One Way Delays along with Jitter over the Network. This app needs to run on the client machine as a background task with user defined periodicity. This app has no special requirement on the client side applications.


> A library which can be linked to client applications (as a DLL in Windows). The library contains APIs to measure application specific performance metrics such as Service Setup Time, Service Processing Time, Context Update Time and Custom Context. Each API has a BEGIN and END API call that need to be used by the application to signal starting and stopping of the required measurements. It is recommended that the APIs are called by the application under DEBUG modes. The END API needs to be called after the current task has completed. 


For example, When an app requires to measure the latency in processing a service request, on making a request to the server, it needs to call the SMX_Begin_SPT API. After the App deems the service request has been processed, it calls the corresponding SMX_End_SPT API. Similarly for Service Setup (during APP startup for example), context update (for AR, VR  kind of apps) and custom context.

The Start APIs return immediately and should not cause any extra processing overhead. The End APIs may introduce some processing delay therefore the End API should be called after all delay sensitive tasks are completed.

V0.1 - Each Start must have an End API call. Calls cannot be nested.
