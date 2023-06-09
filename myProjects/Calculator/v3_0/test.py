from subprocess import Popen, PIPE

process = Popen(["./calc"], stdout=PIPE)
(output, err) = process.communicate()
exit_code = process.wait()

expected = [ "4", "12" ]

i = 0

lines = output.split("\n");

for line in lines:
    if line != "" and expected[i] != line:
        print("{0} != {1} (expected)".format(line, expected[i]))
    i = i + 1

