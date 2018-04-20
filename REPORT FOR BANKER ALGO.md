MAM THIS IS MY PROGRAM FOR SIMPLE BANKER'S algo AS U TOLD ME TO KEEP IT AS IT IS, SIMPLE BANKER WHERE EACH PROCESS HAS ANY NUMBER OF RESOURCES OF DIFERENT TYPE

# Check safe state
The banker’s algorithm is a resource allocation and deadlock avoidance algorithm that tests for safety by simulating the allocation for predetermined maximum possible amounts of all resources, then makes an state check to test for possible activities, before deciding whether allocation should be allowed to continue.

Here i have created a structure name saftey which contains 3 array allocation,maximum,need which are 1-D array and one variable flag.
Than i started my main method which contains Menu for increase user simplicity, where i have created object of saftey S with size of 10.

Safety Algorithm

The algorithm for finding out whether or not a system is in a safe state can be described as follows:

1) Let Work and Finish be vectors of length ‘m’ and ‘n’ respectively.
Initialize: Work = Available
Finish[i] = false; for i=1, 2, 3, 4….n

2) Find an i such that both
a) Finish[i] = false
b) Needi <= Work if no such i exists goto step (4)

3) Work = Work + Allocation
Finish[i] = true
goto step (2)

4) if finish [i] = true for all i
then the system is in a safe state
Example:

Considering a system with five processes P0 through P4 and three resources types A, B, C. Resource type A has 10 instances, B has 5 instances and type C has 7 instances. 
