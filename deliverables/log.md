Assignment 4 Programming Log
============================

13 February
-----------

Created project folder with basic makefile and git version contol.

Created `deliverables/design.md` detailing an approximate idea of
what the final application should look like.

Created and began logging in `deliverables/log.md`.

Created `list.h` and `list.cpp`.

Wrote initial list implementation in `list.cpp`.

Fixed typos in `list.h`.

Created test code for the list class in `main.cpp`.

Created `stack.h` and `stack.cpp`.

Wrote initial stack implementation in `stack.cpp`.

Fixed typos in `stack.h`.

Created test code for the stack class in `main.cpp`.

Removed code specific to the list testing from `list.cpp`.

Created argument loop in `main.cpp`.

Created argument parser in `main.cpp`.

Added `--help` flag to the application.

Added `--version` flag to the application.

Added `VERSION_MAJOR`, `VERSION_MINOR`, and `VERSION_REV` constants
to the project.

Added `--debug` flag to the application.

Added log() utility funtion to the application.

Moved utility functions (log(), error(), usage(), help(), and
version())to a seperate file.

Moved project-global constants to `constants.h`.


18 February
-----------

Added basic input parsing. Accepts input one word at a time and
echos the first character of the word.

Added operand recognition.

Added operand stack.

Added debugging output.


19 February
-----------

Added basic operator support.

Added '+' operator.

Added '-' operator.

Added '*' operator.

Added '/' operator.

Added 'sq' operator.

Added 'sqrt' operator.

Added 'dup' operator.

Added 'swap' operator.

Added 'ps' operator.

Added 'quit' operator.

Note that I have not tested any of these operators. It runs
without crashing, but correct behaviour is not guarenteed.
Or expected.


20 February
-----------

Fixed stack pop bug.

Added program header.

Fixed 'ps' implementation to match the format given on the
assignment.

Fixed operand detection to allow for negative operands.
