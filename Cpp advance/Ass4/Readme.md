# Assignment 4: Files Workshop Part Two
## Description
This assignment builds upon the concepts of file handling introduced earlier, delving into more advanced file<br>
operations in C++. It covers topics such as error handling, binary file handling, and more complex file manipulations.

## Contents
Error Handling in File Operations<br>
Binary File Handling<br>
Example Demonstrating Advanced File Operations<br>

## Error Handling in File Operations
**File Stream States:** File streams in C++ have various states (good, eof, fail, bad), and error flags can be checked to handle file operation errors.<br>
**Error Handling Techniques:** Techniques such as using exceptions, checking stream states (failbit, badbit), etc., can be employed for error handling.<br>
**Binary File Handling**<br>
**Binary Files:** Binary file handling involves reading and writing raw data to files without any formatting, suitable for handling non-textual data.<br>

##
 while (std::getline(dataFile, line))<br>
    {<br>
        if (line.find("facet normal") != std::string::npos)<br>
        {<br>
            std::string token;<br>
            std::string toke;<br>
            std::istringstream iss4(line);<br>
            double x;<br>
			double y;<br>
			double z;<br>
            iss4 >> token >> toke >> x >> y >> z;<br>
            normal = Point3D(x, y, z);<br>
        }<br>
 
