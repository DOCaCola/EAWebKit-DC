# EAWebKit-DC 

This is an unofficial fork of EAWebKit, a port by Electronic Arts of the WebKit project.

## What is EAWebKit

EAWebKit is a customized version of WebKit that is designed to integrate web content (HTML/CSS/JS) into video games and run on various platforms (PC, Xbox, Playstation) as well as providing hooks for game engines for memory management, text rendering, input handling and others.

EAWebKit is open-sourced by Electronic Arts under the GNU Lesser General Public License version 2.1. The official source code can be downloaded at https://gpl.ea.com/eawebkit.html.

## What is EAWebKit-DC

This fork is based on version 16.4.2.0.0 of EAWebKit. It contains some minor additions and fixes for building EAWebKit. See commits for details.

EAWebKit-DC uses the CMake build system. This is in contrast to the Visual Studio project files coming with the raw releases from EA. EA's project files are usually unusuable since they were created with internal tooling in mind.

## Building EAWebKit-DC

In order to create the necessary project files, you need to use [CMake](https://cmake.org/).

**The CMake build files currently were only tested on Win64 with Visual Studio.** The CMake files still need to be extended to work with other platforms.


## License 
Please see [licenses](licenses) for the different licenses for EAWebKit.

