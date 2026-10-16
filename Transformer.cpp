#include <iostream>
#include <fstream>
#include <string>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> process(string input)
{
    int n = input.length();
    int limit = 850;
    vector<string> response;
    string output = "";

    for (int i = 0; i < n; i++)
    {

        if (input[i] == '\n')
        {
            if (input[i + 1] == '\n')
            {
                input.erase(input[i]);
                response.push_back(output);
                output = "";
            }
            else
            {
                response.push_back(output);
                output = ""; // RESET
            }
        }
        else if (input[i] == ' ' or i == (n - 1))
        {
            if (input[i + 1] == ' ')
            {
                response.pop_back();
            }

            if (i == (n - 1))
            {
                output += input[i];
            }

            output += " "; // END THE LINE
            response.push_back(output);
            output = ""; // RESET
        }
        else if (input[i] == '.' and input[i + 1] != ' ')
        {
            output += input[i];
            output += " "; // END THE LINE
            response.push_back(output);
            output = ""; // RESET
        }
        else
        {
            output += input[i];
        }
    }

    return response;
}

int main()
{
    string str = "";

    string test = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum ac leo ultricies, semper diam ut, rhoncus libero. Vivamus ut purus faucibus, sodales dolor eu, dignissim ligula. Vivamus viverra sem eu risus consectetur dignissim. Phasellus accumsan lobortis est efficitur placerat. Vivamus commodo iaculis porta. Aenean lobortis turpis sed lacus pretium porta. Cras ut tempus justo, sit amet placerat risus. Mauris blandit lorem sed ipsum iaculis pellentesque. Curabitur sit amet tristique massa. Suspendisse porta ex vitae arcu condimentum pulvinar. Nulla facilisi. Phasellus ullamcorper commodo elementum. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Integer imperdiet urna in eros pulvinar, ut aliquam diam fermentum. Ut ut ante a magna facilisis consectetur ac sed elit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Phasellus euismod maximus egestas. In quis viverra nibh. Ut mattis semper ligula, eu laoreet urna finibus ut. Nam felis augue, malesuada ut ligula ac, iaculis scelerisque mauris. Donec commodo dapibus erat, nec rhoncus ante semper vitae. In a ullamcorper turpis. Duis tempus at quam vel ornare. Nullam fringilla viverra arcu non dignissim. Aliquam imperdiet consectetur libero, ac placerat mauris imperdiet at. Ut vulputate lorem arcu, eget euismod nunc sodales a. Phasellus arcu quam, accumsan auctor odio id, euismod fringilla dolor. Aenean vulputate rhoncus hendrerit. Proin sed nulla eget dui tristique commodo. Aliquam augue mauris, sagittis non ante eu, ornare dignissim mi. Sed mattis, neque vestibulum egestas posuere, mi mi iaculis diam, sed semper nunc lacus eget arcu. Curabitur id imperdiet erat. Phasellus lobortis pharetra dignissim. Mauris nunc mi, malesuada sit amet viverra et, elementum vel arcu. In vel sapien ut nunc facilisis tincidunt. Phasellus semper lorem nec feugiat dictum. Integer lobortis, nulla non imperdiet maximus, augue diam interdum felis, eget semper urna purus sed enim. In quis sapien vitae lorem facilisis placerat. Integer vel risus non lectus dapibus rutrum vitae tincidunt ante. Curabitur tempor ornare vulputate. Nam egestas quam ut turpis dignissim, vel molestie est varius. Pellentesque id arcu sit amet lorem dignissim malesuada a sed lectus. Etiam lobortis, ipsum et dapibus tincidunt, orci elit ultricies felis, nec congue felis massa id erat. Aliquam non velit non nibh placerat faucibus. Nam ut nulla vitae magna auctor dignissim in vitae purus. Proin in vestibulum sapien. In nisl purus, varius id justo elementum, pulvinar dictum tortor. Quisque cursus metus euismod ligula dapibus, eu euismod dolor venenatis. Pellentesque vulputate facilisis justo id viverra. Aliquam ac sagittis eros. Nam porttitor nulla ac consequat ornare. Fusce sagittis vitae libero vel malesuada. Nullam neque lacus, lobortis nec maximus a, dapibus quis nisl. Duis consectetur urna sagittis velit varius, non volutpat velit aliquet. Maecenas accumsan sit amet tellus at tristique. Ut semper, urna et laoreet dapibus, dui libero vulputate ligula, sit amet maximus massa nulla et ex. Aliquam interdum pharetra elit, quis maximus ipsum bibendum sit amet. Curabitur posuere, dolor ultrices malesuada varius, tellus elit sollicitudin leo, sit amet interdum nibh lorem non magna. Etiam orci metus, scelerisque at eleifend in, ultrices non ante. Cras eget dui ac lectus varius eleifend in a turpis. Donec in aliquam erat. Phasellus bibendum enim at pulvinar vehicula. Aliquam non lacus erat. Duis cursus nunc et tortor porta, eget dapibus quam gravida. Praesent ornare risus sit amet tortor vehicula, ornare pharetra magna efficitur. Mauris congue felis imperdiet aliquam posuere. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse ut felis arcu. Vestibulum ut libero egestas eros cursus luctus nec sit amet turpis. Nulla eleifend venenatis placerat. Quisque vel elit sed felis sollicitudin vestibulum ut sit amet lectus. Nullam sit amet vestibulum risus. Aliquam et metus lorem. Aliquam erat volutpat. Morbi egestas sodales pellentesque. Donec interdum vehicula enim, eu consectetur metus mollis vitae. Morbi ut risus sollicitudin, sodales nulla sit amet, fringilla ligula. Etiam eu maximus lorem. Morbi ut lectus augue. Quisque faucibus eu neque vel cursus. Proin tristique volutpat risus, quis gravida est elementum sit amet. Nam at magna sodales, semper lacus vitae, dictum lectus. Nunc ac ligula ipsum. Vivamus risus quam, tempor ac nulla id, faucibus gravida quam. Fusce vehicula, ipsum nec sodales aliquet, purus ex viverra arcu, et pretium elit mauris sit amet velit. Vestibulum fermentum mi augue, ac hendrerit lorem ultricies ut. Etiam ac risus erat. Pellentesque nulla eros, gravida eget est vitae, tristique congue tortor. Suspendisse vehicula dolor quis diam varius, non feugiat mauris lacinia. Cras et vulputate neque, aliquet elementum lorem. Morbi eu eros accumsan, efficitur enim nec, elementum ipsum. Aliquam pellentesque, nulla et mollis pellentesque, tellus mi dignissim ligula, quis auctor risus tortor ac velit. Aenean in nunc sit amet sem cursus condimentum. Donec eleifend, arcu rutrum convallis tempor, sem velit tincidunt turpis, nec commodo eros est quis libero. Quisque elementum finibus rhoncus. Praesent faucibus velit nec nulla efficitur, in aliquam lectus luctus. Nulla lacinia libero et dui vehicula ultrices. Mauris faucibus non erat quis varius. Nunc vel felis id odio venenatis egestas. Quisque dictum ut nulla sed congue. Nulla facilisi. Maecenas mollis enim iaculis, interdum nulla sit amet, volutpat eros. Etiam sit amet maximus libero. Vivamus sapien mi, sagittis vel enim non, pretium ultricies justo. Duis rhoncus efficitur suscipit. Pellentesque in odio odio. Aenean ligula sapien, pharetra id felis a, facilisis scelerisque ligula. Etiam ac ex et libero auctor feugiat. Proin vel augue eget ligula fringilla dictum. Etiam gravida metus quis ex malesuada rhoncus. Praesent nec posuere augue. Sed ex sem, ullamcorper ut sem vel, vestibulum pretium nulla. Nam in tincidunt neque. Suspendisse ac leo. ";

    string fileOutput = "filename.txt";
    ofstream myFile(fileOutput);

    vector<string> vec;
    vector<string> output;

    vec = process(test);

    vector<string> backup;
    backup = vec;

    int splitIndex = 0;
    int oldSplit = 0;

    for (int i = (splitIndex + 850); i > (splitIndex + 800); i--)
    {
        string word = vec[i];

        if (word[word.length() - 2] == '.' or word[word.length() - 2] == '?' or word[word.length() - 2] == '!')
        {
            splitIndex = i + 1;
            break;
        } // END OF IF STATEMENT
    } // END OF FOR LOOP

    string chunk = "";

    for (int i = oldSplit; i < splitIndex; i++)
    {
        chunk = chunk + vec[i];
    } // END OF FOR LOOP

    output.push_back(chunk);

    for (int i = 0; i < output.size(); i++)
    {
        myFile << output[i];
    } // END OF FOR LOOP

    myFile.close();

    return 0;
}