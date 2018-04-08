# deadlocks1
Suppose that my one process is using my printer for printing but at the same time second process want to use printer but printer is already allocated to Process P1 than what when will process p2 get assigned for printer?? so the concept of safe state came in play.

For the purposes of using deadloack, a system can be modeled as a collection of limited resources, which can be partitioned into different categories, to be allocated to a number of processes, each having different needs for example-- Resource categories may include memory, printers, CPUs, open files, tape drives, CD-ROMS, etc. 
all the resources within a category are equivalent (as question describes), and a request of this category can be equally satisfied by any one of the resources in that category. If this is not the case ( i.e. if there is some difference between the resources within a category ), then that category needs to be further divided into separate categories. For example, "printers" may need to be separated into "laser printers" and "color inkjet printers".
Some categories may have a single resource.
In normal operation a process must request a resource before using it, and release it when it is done, in the following sequence:

 Request - If the request cannot be immediately granted, then the process must wait until the resources it needs become available. For example a resource is locked by process p2 and process p1 wants it too than it has to wait for p2 to relase it
 Use - The process uses the resource, e.g. prints to the printer or reads from the file.
 Release - The process give away the resource. so that it becomes available for other processes. For example using unlock
