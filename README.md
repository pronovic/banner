## Banner

This is a classic-style banner program similar to the one found in Solaris
or AIX in the late 1990s.  It prints a short string to the console in very
large letters.

This is the default banner implementation for some Linux distributions, such as [Gentoo](https://packages.gentoo.org/packages/app-misc/banner) and [Fedora](https://rpms.remirepo.net/rpmphp/zoom.php?rpm=banner).  Other 
distributions like Debian have a different implementation.  I am a Debian
developer and I run Debian on all of my machines, so I don't actually use
this code on a regular basis any more.

Yeah, yeah, this IS a pretty simple program, and it doesn't really need a
GNU autoconf setup and all that stuff - it's just ANSI C.  This just gave
me an excuse to learn autoconf... These days, I maintain it for the sake
of nostalgia. ;)   

## History

When I first wrote this code back in the late 1990s, the Linux world was a
different place.  At the time, my README said:

```
I've used a lot of different UN*X systems, and all of them, as far as I can
tell, seem to provide a "banner" program that prints some short string in
large letters.  Except Linux.  When I wrote this, I couldn't seem to find
something like this anywhere (well, there is /usr/games/banner, but that's
different than a typical banner implementation).  So, since it was such a
simplistic thing to do, I wrote it myself.  
```

## Usage

Using the program is easy, for instance:

```
$ banner ken
#    #  #######  #     #
#   #   #        ##    #
#  #    #        # #   #
###     #####    #  #  #
#  #    #        #   # #
#   #   #        #    ##
#    #  #######  #     #
```

The terminal is assumed to be 80 columns wide.  If you have `$COLUMNS`
exported in your environment, it's taken to be the width of the terminal.
That way, you can print wider strings if you need to.

## Behavior

From time to time, people assert that this program is buggy because it
doesn't do something that some other banner implementation does.  The
behavior of the program is based on what I saw on Solaris and AIX systems
at the time I wrote it in the late 1990s.  I make no claims that the
behavior is identical to that of any other contemporary system, especially
any non-free system that I may or may not have access to. 

If you don't like the behavior, you can either submit a pull request, or
you can use an alternative program such as `figlet`.  I am always happy to
accept pull requests, and I promise to merge them promptly if provided.  So
far, no one who's complained has bothered to provide any patches, so the
behavior remains the same.

## Supported Platforms

Historically, I have built and run this program under various versions of
Linux as well as Solaris 2.8 and AIX 4.3.  These days I don't have access
to very many non-Linux systems with compilers, so I've only tested the code
under Debian.

## Updates

I do not update this code very often.  As a result, the autoconf and
automake definitions are typically out-of-date.  Most recently (2013),
Fedora asked me to update autoconf so that the package would support the
ARM 64-bit architecture.  If you need a change like this, please let me
know and I'm happy to take care of it.  However, I do not plan to make
releases on a regular basis just to update these definitions.

## Configuration

The code is configurable on a compile-time basis.  The letter definitions
can be changed by changing the array definitions in [`letters.h`](letters.h).  The
defined letter height, the number of spaces after each letter, the max
letters of a given string that will be printed, etc. are all controlled
from in there.  The only real restriction is that all of the letters have
to be the same height.
