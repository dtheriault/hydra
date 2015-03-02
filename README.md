The Medusa Project
======================================================================================

The Medusa project is a collaborative effort between N1GP and NO1D in an attempt
to produce a 'n' port CW/RTTY Skimmer platform based on RTL SDR technology.

The work is heavily leveraged from existing projects such as cuSDR and rtl-sdr 
development efforts.  

Changes and focus has been optimizing and supporting small embedded platforms such
as the Odroid C1/U3/XU3, Nvidia TK1 and RaspberryPI which may or may not be viable
platforms to execute on. 

The git repo allows us to share code changes easily using GIT and utilize GitHub to 
track issues and changes.  In the end, Rick will push changes made here up stream
to main projects librtlhpsdr and cusdr should they be deemed suitible for mainstream
users.


Challenges:
======================================================================================

    -- Optimizing code bases to run fast/efficiently on ARM based platforms
    -- Providing reliable support for up to 8 RTL dongles
    -- Create tools useful for calibration of RTL dongles for accurate CW Skimmer spot
       reporting in the Reverse Beacon Network (RBN).
    -- Develop unique hardware which includes front end filters, attenuator, mixer, 
       multiport coupler, amplifiers to ease integration with low cost RTLSDR dongles.
    -- Unique hardware packaging 
 

Project Organization:
======================================================================================
    -- Medusa             Top Level

      -- Software         Software Top Level
          -- librtlsdr    RTL Libraries and tools
          -- cusdrk       cuSDR GUI Application
          -- plotter      Skimmer Plotter, QRZ/RBN tools

      -- Hardware         Hardware Top Level
          -- Schematic    Schematic data in Eagle format
          -- Boards       ditto
          -- BOM          BOM files
          -- Mechanicals  Hardware Case information

      -- Documentation
          -- Specifications	
          -- Test Plans		
          -- Measurement Data

      -- Testing
          -- Scripts and Test Plans







