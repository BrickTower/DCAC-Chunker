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

    // for (vector<string>::iterator i = response.begin(); i != response.end();)
    // {
    //     if (i->empty())
    //     {
    //         i = response.erase(i);
    //     }
    //     else
    //     {
    //         ++i;
    //     }
    // }

    return response;
}

int main()
{
    string str = "";
    string test = "Nolan Morris\n \
251103372\n \
Professor Kathleen Fraser\n \
Writing 2202F\n \
July 31st, 2023\n \
Air Planning, Coordination and Operation Desert Storm \
\n\n \
After Iraqi\'s refusal to leave Kuwait after their invasion in August of 1990, a coalition of nations led by the U.S. began a military build up in Saudi Arabia to deter further  aggression from Iraq. The United Nations Security Council gave many chances for Iraq to withdraw and solve the situation peacefully, and a final warning to retreat to the old  borders  before January 15th 1991 was issued, or it would encourage states to use \"all necessary means\" to remove them from Kuwait. When Iraq, once again, failed to comply, the  coalition launched Operation Desert Storm on the 17th of January 1991, a five week long aerial and naval campaign meant to completely incapacitate Iraq before the ground campaign  would launch to fully remove any forces still remaining in Kuwait. The operation resulted in an overwhelming victory, with the coalition gaining air superiority in the first hours  of  the war, and air supremacy a few days later. The superior training and technology the coalition wielded played a significant role, but ultimately, the success of the campaign came down to effective planning and coordination of thousands of aircraft from different branches of the U.S. military and other coalition forces, under a single commander. Without  this unity between the air services, it is highly likely Operation Desert Storm would have had a significantly different degree of strategic success, regardless of the \
technological superiority the coalition possessed.\n\n \
One thing that changed significantly in this campaign was the introduction of the Joint Force Air Component Commander (JFACC), General Charles Horner, who was responsible for coordinating all air assets in the theatre of operations to align with the Commander in Chief\'s (CINC) overall plan. The JFACC removed any and all inter-service squabbles that might have arisen, and forced them to all work together as a single, cohesive unit. This massively improved coordination between each branch of the U.S. military as well as with air units from other countries as, during the entire operation, there was not a single case of air-on-air friendly fire and there were only a few isolated incidents of mid-air collisions during the entire operation (Winnefeld, 264). Considering over 116,000 sorties were flown in the entire operation (Pope), it could hardly be considered luck that no fratricide was committed. Additionally, the JFACC made all air assets, from every branch and nation, available at once, allowing for significantly improved flexibility in terms of mission and strike planning. An example of this can be seen in Figure 1 depicting F-15Cs of the U.S. Air Force flying in formation with a Saudi Arabian F-5E Tiger, aircraft that would have never flown together in operations previous to this one without a JFACC.\n\n \
Figure 1: F-15C Strike Eagles of the U.S. Air Force Flying with a Saudi Arabian F-5E Tiger. (National Interest) \
Being able to take advantage of having all air assets coordinate together allowed for incredibly complex combined strikes such as in the initial opening attacks of the operation where the Army\'s AH-64 Apache attack helicopters opened a hole in the Iraqi integrated air defence system (IADS) for Air Force EF-111 Aircraft to begin jamming operations while Marine A-6E, Air Force F-15E, and F-18C aircraft hit airbases and SCUD missile sites to cripple the enemy air force and ensure air superiority. Additionally, it allowed for these strikes to simultaneously happen with strikes from F-117 stealth aircraft on Baghdad itself to knock out command and control nodes to cripple the Iraqi armed forces from responding in a coordinated manner to the attacks.\n\n \
This opening salvo crippled Iraq for the rest of the conflict, allowing the coalition air assets to operate with complete impunity, but none of this would have been possible without the JFACC to coordinate all these services together. Retired Lieutenant General David A. Deptula, one of the principal attack planners for Desert Storm, states that the JFACC “... was essential to the successful orchestration of a single air campaign plan.” (Deptula) and likens the air commander to a single coach coordinating their team to win the game vs many smaller teams trying to run their own plays on the same field at the same time. Despite the air commander\'s authority, there were still attempts by each service branch to bypass this joint planning process due to their different doctrinal views on air power employment (Deptula), something that would have made the entire opening strike of the operation impossible. The coordination and timing to successfully pull off something like the opening strike could never happen if each service was not entirely on the same page. A failure in these initial strikes could have led to significantly higher casualties over the course of the campaign due to Iraq retaining the ability to control and coordinate their IADS and for the Iraqi Air Force to become a much more active component.\n\n \
One doesn\'t have to look further back than Operation Rolling Thunder to see the evidence of poor coordination and the disastrous effects it can have on an operation. The campaign to strike strategic assets in North Vietnam to cripple their ability to wage war and give up the idea of taking over South Vietnam shares similar objectives to the ones Desert Storm laid out some 25 years later. During this period, the Navy and the Air Force were to strike a list of strategic targets only once they had been approved by the Johnson administration and not a JFACC or similar commander experienced in the application of air power. As such, the Air Force describes the operation as having \"... no clear-cut objective nor did its authors have any real estimate of the cost of lives and aircraft.\" (Air Force Historical Support Division) and the campaign inevitably failed to weaken the will of the Northern Vietnamese forces while the U.S. Navy and Air Force lost significant aircraft and pilots to SAMs and AAA. Some place the estimates as high as 1000 pilots and aircraft lost. The disastrous results of this operation led to the Goldwater-Nichols Act which made significant changes to the military chain of command. While it is speculation to say that the campaign would have been as successful as Desert Storm had it been planned by a commander fluent in the application of air power, it certainly would have given Rolling Thunder a significantly better chance of success. The failure of this operation contrasted with the overwhelming success of Desert Storm highlights just how crucial a coordinated plan of attack can be to the outcome of a campaign, especially considering many of the same assets used in Vietnam were used in Desert Storm as well.\n\n \
Many argue that the technological difference between the coalition and the ageing Iraqi forces was the ultimate decider, but without an effective plan to leverage all the technology at the disposal of the coalition, it would have not had nearly as significant an effect as many believe. Many point to the F-117 Nighthawks that got their fame from this conflict, where they flew hundreds of sorties over Baghdad, one of the most heavily defended cities on the planet, striking targets night after night. Deptula states that these F-117s with their laser guided munitions \"... struck over 40 percent of Iraq\'s fixed targets despite flying only two percent of combat sorties.\" (Deptula). While certainly an impressive amount, a significant portion of their success comes from the planning that these strike missions involved. Since the F-117 was incredibly hard, if not impossible, to detect on radar, the planners for these strike missions leveraged this by ensuring that the same flight routes over the city were never used more than once consecutively (Leone) to continually surprise the enemy night after night. Additionally, and especially during the opening nights of the campaign, they were supported by EF-111 Raven jamming aircraft in case the stealth capabilities were not as good as predicted. Without this coordination and planning from the JFACC and other air component commanders, there is a high probability that the F-117 would not have earned the stellar record it achieved. An example of this can be seen when an F-117, Vega 3-1, was shot down nearly nine years later during NATO intervention in Serbia by an ancient SA-3 SAM for failing to follow the exact reasons outlined above. While much of the reasons that went into the downing of the Vega 3-1 was luck and poor timing, it is not unreasonable to think that, had the JFACC not allocated support for these stealth aircraft, that the Iraqis could have been lucky in a similar manner. This is especially true considering the Iraqis extensively used the SA-3 SAM in their IADS, and had the planners not taken the critical operational security measures they did to maintain the element of surprise over, what can be seen below in the table, 1297 sorties, the Iraqis certainly could have been able to figure out a counter to this technology.\n\n \
Figure 2: Table showing all combat aircraft used in Desert Storm along with their number of sorties flown, Full Mission Capable (FMC) Rates, and Mission Capable (MC) rates. (Winnefeld, 246) \
Moreover, with the significant amount of new technology that was used in this conflict, there were serious problems that arose despite the success of the operation. An evaluation of the air war presented to congress by the United States General Accounting Office found that \"...the effectiveness of air power in Desert Storm was inhibited by the aircraft\'s sensors\' inherent limitations in identifying and acquiring targets…\" (U.S. GAO, 3). While this paints a picture that the sensors in the aircraft did not work at all as intended, the report later clarifies that the sensors did not work well in cloud cover or adverse weather conditions which led to some pilots being unable to determine the type of vehicle they were observing or even whether or not said vehicle had been destroyed. Yet, in spite of this, the campaign was still an incredible success, due in large part to the impunity that coalition forces operated with after the first few days of the war. Because the Iraqi Air Force was mostly destroyed or grounded in the opening of the campaign, the coalition had the luxury of being able to hit targets multiple times if necessary or to wait for adverse weather to clear. Had the Iraqi Air Force or IADS posed a larger threat, this limitation in technology would have been much more significant, but due to the coordination and the planning that went into the initial days, the deficiencies of the technology given to the coalition could safely be ignored.\n\n \
The plans drafted by the JFACC and CINC were so effective that they nearly completed all the strategic objectives of the operation before any ground unit moved. The coalition started the campaign with the strategic aims of removing Iraqi forces from Kuwait and ensuring that Iraq would not be able to rise as a regional power for the foreseeable future. After the initial opening salvo of strikes that paralyzed Iraqi response, the air strikes shifted towards destroying SCUD missile sites, chemical and biological weapons facilities and then to striking critical infrastructure and occupying units themselves. The coalition launched thousands of sorties involving aircraft from all branches, including Marine A-6Es and Air Force F-111s and A-10s, targeting the logistical system supporting the invading divisions. Targeting bridges, fuel depots and rail yards, the coalition was able to reduce the supply levels of some Iraqi units to the point that they were no longer able to subsist after just 25 days. By the time the ground campaign was launched, some of these Iraqi units were beginning to starve from lack of supplies (Martin, 81). Naturally, this had a huge psychological effect on the invading soldiers, with Lt Col Jerome V. Martin of the U.S. Air Force states that the number of Iraqi deserters at over 150,000, nearly an entire army of soldiers (Martin, 81). Apart from the more fanatical Republican Guard units, the soldiers that did not desert put up little resistance, if any, once the ground campaign started, leading to some 78,000 captured, over five divisions, by the end of the conflict (Martin, 82).  The plans that the air strikes operated under had been so effective that they rotted the entire will to fight from the Iraqi units, and the ground campaign simply kicked in the door to fully remove all remaining occupiers from Kuwait. Additionally, the direct attacks on Iraqi units themselves destroyed over 4,200 armoured vehicles and artillery pieces (Deptula), ensuring that Iraq would spend years and years replacing equipment and it ensured that Iraq would never again rise to the powerful position it did in the region. Never before had an air campaign nearly completed all strategic goals of a campaign on its own, and this radical departure from the historical role of air power by the JFACC and CINC set a standard for how air campaigns are to be conducted.\n\n \
Naturally, it is ignorant to assume the technological difference and the superior training of the coalition units played a minimal role in the complete victory that was achieved, but it is hard to believe, given all the evidence, that without the strong plans and command changes implemented by the CINC, the operation would not have gone as smoothly as it did. Perhaps the campaign could have had a similar outcome to that of Operation Rolling Thunder in Vietnam, but it is evident that the coalition leveraged every advantage they had to their fullest. As a result, the operation remains in history as one of the most successful campaigns ever wagered, and changed the role of the aircraft in modern combat for the future.\n\n \
Works Cited\n \
Winnefeld, James A, et al. A League of Airmen: U.S. Airpower in the Gulf War. Rand Corporation, 1994.\n \
Pope, Charles. “30 years later, Desert Storm remains a powerful influence on Air, Space Forces” Air Force, February 23, 2021. www.af.mil/News/Article-Display/Article/2512938/30-years-later-desert-storm-remains-a-powerful-influence-on-air-space-forces/\n \
\"F-15Cs flying with F-5E Tiger II During Operation Desert Storm\", 1991, National Interest. www.nationalinterest.org/sites/default/files/main_images/desert%20storm%20flickr_0.jpg\n\
Deptula A, David. “Desert Storm at 30: Aerospace Power and the U.S. Military” War On The Rocks, 21 March. 2021, www.warontherocks.com/2021/03/desert-storm-at-30-aerospace-power-and-the-u-s-military\n	\
1965 - Operation Rolling Thunder. Air Force Historical Support Division, Accessed July 20th, 2023. www.afhistory.af.mil/FAQs/Fact-Sheets/Article/458992/1965-operation-rolling-thunder \
Winnefeld, James A, et al. Selected Aircraft Operational and Logistics Data. by Winnefeld, James A, et al. Rand Corporation, 1994, p. 246.\n \
Leone, Dario. \"An In-Depth Analysis of how Serbs Were Able to Shoot Down An F-117 Stealth Fighter During Operation Allied Force\" The Aviation Geek Club, 26 March 2020, www.theaviationgeekclub.com/an-in-depth-analysis-of-how-serbs-were-able-to-shoot-down-an-f-117-stealth-fighter-during-operation-allied-force/\n \
Operation Desert Storm: Evaluation of the Air War. United States General Accounting Office, 1996. www.govinfo.gov/content/pkg/GAOREPORTS-PEMD-96-10/pdf/GAOREPORTS-PEMD-96-10.pdf\n\
Martin, Jerome V. Victory from Above: Air Power Theory and the Conduct of Operations Desert Shield and Desert Storm. Air University Press, 1994. www.apps.dtic.mil/sti/pdfs/ADA283460.pdf\n\n";
    string fileOutput = "filename.txt";
    ofstream myFile(fileOutput);
    for (int i = 0; i <= 860; i++)
    {
        str += "I pride myself and think of myself as a man of faith, as there's a drive into deep left field by Castellanos, it will be a home run. And so that'll make it a 4–0 ballgame."; // INPUT
    }

    vector<string> vec;
    vector<string> output;

    vec = process(test);

    cout << "Vec size: " << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        cout << i << ": " << vec[i] << endl;
    }

    vector<string> backup; // BACKUP THE ARRAY
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
        }
    }

    string chunk = "";

    for (int i = oldSplit; i < splitIndex; i++)
    {
        chunk = chunk + vec[i];
    }

    output.push_back(chunk);

    for (int i = 0; i < output.size(); i++)
    {
        myFile << output[i];
    }

    myFile.close();

    return 0;
}