class Solution:
    def findComplement(self, num: int) -> int:
        str = bin(num)[2:]
        str = str.replace('0', 'temp').replace('1', '0').replace('temp', '1')
        return int(str, 2)