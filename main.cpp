#include <iostream>
#include <fstream>

//declare our functions for later override
void loadWorldMap(const std::string& file);
void echo(const std::string& text);

int main() {

    std::string worldMap = "sample01.env";

    loadWorldMap(worldMap);

    return 0;
}

void echo(const std::string& text){
    std::cout << text << std::endl;
}

void loadWorldMap(const std::string& file){
    //initialize our vars
    int xWidth = 0;
    int yHeight = 0;
    std::string lines;
    //create our file steam
    std::ifstream fileStream(file);
    //validate its open;
    if(!fileStream.is_open()){
        echo("ERROR: couldn't open file '"+file+"'");
    }else{
        echo ("SUCCESS: valid file provided, starting read of file '"+file+"'");
        while(!fileStream.eof()){
            //declare our line var
            std::string line;
            //copy the current line from the file stream into this line
            std::getline(fileStream, line);
            //add our new line to the lines string seperated by a comer
            lines += line;
            //check if xWidth is set, if not set it
            if(xWidth == 0){
                xWidth = (int)line.length();
            }
            yHeight ++;
            //check if the line length is 0, if so we break the while loop
            if(line.length() == 0){
                continue;
            }
        }

        //show world statistics
        echo("______________________________________");
        echo("World Statistics: ");
        echo("xWidth = "+std::to_string(xWidth));
        echo("yHeight = "+std::to_string(yHeight));
        echo("Total Tiles = "+std::to_string(xWidth*yHeight));
        echo("______________________________________");

        //create our 2D world array
        char world[yHeight][xWidth];
        //create our exploded input array
        std::string linesArray[yHeight];
         int i = 0;
         while(i < yHeight){
             //use a mask to create substring at the specific locations of each line input, in this case we multiply i by 20 each time
             linesArray[i] = lines.substr(i*xWidth,xWidth);
             i++;
         }
         //Convert our lines array of strings in to our main world array of chars
         i = 0;
         //create our J value to store our tile location (X)
         int j = 0;
         //iterate over our Y locations with i
         while(i < yHeight){
             //if j is greater than 19 then reset j to 0 and increase our i variable (Y);
             if(j > 19){
                 j = 0;
                 i++;
             }else{
                 //else we set the tile location in the world
                 world[i][j] = linesArray[i][j];
             }
             j++;
         }
        //show success text
        echo("SUCCESS: world loaded!");
    }
}