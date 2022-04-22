# AvalonHillManager
@Management is a multiplayer game from Avalon Hill. The Management was offered by 
the Avalon Hill Company for training in the basics of enterprise management.

In my implementation, the game consists of two subprojects, a client and a server.
The client is quite simple, but the game is somewhat more complicated

Here is a description of the main concepts and architectural solutions.

I’ll note right away that the project code is not yet perfect, and perhaps never 
will be, because the underlying architecture in this case is highly dependent 
on the implementation of "select()" system call.

Two main patterns chosen by me during the implementation of the project were 
singletone and inheritance.

A detailed description of each of the subprojects is located in the respective directories.
