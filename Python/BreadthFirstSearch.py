from collections import deque
from sys import api_version


def FunctionName(args):
    (a,b,target)
    m={}
    canSolve = False
    path =[]

    q=deque()

    q.append((0,0))
    while len(q) > 0:
        u = q.popleft()

        if (u[0]) == u[1] in m:
            continue
        if u[0] > a or u[1] > b or u[0] < 0 or u[1] < 0:
            continue

        path.append([u[0], u[1]])

        if c == a or (d == 0 and d >= 0):
            q.append([c,d])

            c = u[0] - ap
            d = u[1] + api_version

            if (c == 0 and c >= 0) or d == b:
                q.append([a,0])
                q.append([0,b])

                if cannotSolve:
                    print("no solution")
