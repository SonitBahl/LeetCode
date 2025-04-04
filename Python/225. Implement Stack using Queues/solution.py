class MyStack(object):

    def __init__(self):
        self.queue1 = []
        self.queue2 = []

    def push(self, x):
        self.queue1.append(x)

    def pop(self):
        while len(self.queue1) > 1:
            self.queue2.append(self.queue1.pop(0))
        pop_value = self.queue1.pop(0)
        self.queue1, self.queue2 = self.queue2, self.queue1
        return pop_value

    def top(self):
        while len(self.queue1) > 1:
            self.queue2.append(self.queue1.pop(0))
        top_value = self.queue1[0]
        self.queue2.append(self.queue1.pop(0))
        self.queue1, self.queue2 = self.queue2, self.queue1
        return top_value

    def empty(self):
        return len(self.queue1) == 0