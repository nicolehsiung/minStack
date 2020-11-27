# minStack
must be compiled on LeetCode.
the method of finding min is to check the relationship between the top value and the incoming one, if (top>incoming) push incoming one as top, else push top again. The reason of pushing top multiple times is to aviod when the push() func is called, it will actually push away the min value.
