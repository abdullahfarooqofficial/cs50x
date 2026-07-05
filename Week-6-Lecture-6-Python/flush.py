# import time

# for i in range(5, 0, -1):
#     print(i)
#     time.sleep(1)

import time

# for i in range(5, 0, -1):
#     print(i, end=" ")
#     time.sleep(1)
# You might expect:

# 5 4 3 2 1

# appearing one number every second.
# But on some systems, you may see nothing for 5 seconds, and then:
# 5 4 3 2 1
# all at once.
# Why?
# Because the output stayed in the buffer.
# ----------------
import time

for i in range(5, 0, -1):
    print(i, end=" ", flush=True)
    time.sleep(1)
