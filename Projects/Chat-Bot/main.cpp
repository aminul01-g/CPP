#include <iostream> //header file of c++
#include <string.h> //for string lowercaseInput or output
#include <stdio.h>  //for C
#include <fstream>  // for file
#include <cctype>   // for tolower and toupper
#include <ctime>    // for time function
using namespace std;
// Function for convert to lowercase
string tolower(const string &str)
{
    string result;
    for (char c : str)
    {
        result += tolower(c);
    }
    return result;
}
// Function for Time detection
void greetings()
{
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time->tm_hour < 12)
    {
        cout << "\t                    -- Good Morning :) --                 \n\n"
             << endl;
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 17)
    {
        cout << "\t                    -- Good Afternoon :) --                 \n\n"
             << endl;
    }
    else if (time->tm_hour > 17 && time->tm_hour <= 21)
    {
        cout << "\t                    -- Good Evening :) --                 \n\n"
             << endl;
    }
    else if (time->tm_hour > 21 && time->tm_hour < 24)
    {
        cout << "\t                    -- Good Night :) --                 \n\n"
             << endl;
    }
}

// For Date and time
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "  > The date and time is :" << endl
         << "  " << dt << endl;
}
int main()
{
    system("cls"); //? To clear everything from the Terminal;
    // Questions :
    string q1 = "hi";
    string q2 = "how are you?";
    string q3 = "what are you doing now?";
    string q4 = "what is your name?";
    string q5 = "what kind of help i can assist from you?";
    string q6 = "what should i do now?";
    string q7 = "do you have any feelings?";
    string q8 = "where do you live?";
    string q9 = "what is your hobby?";
    string q10 = "who is your best friend?";
    string q11 = "do you marry me?";
    string q12 = "where is bangladesh?";
    string q13 = "tell me about the history of bangladesh?";
    string q14 = "where are you from?";
    string q15 = "suggest me c++ playlist on youtube";
    string q16 = "what time is it?";
    string q17 = "open google";

    // Write Questions from variables to the file;
    ofstream outputFil("question.txt");
    if (outputFil.is_open())
    {
        outputFil << q1 << endl;
        outputFil << q2 << endl;
        outputFil << q3 << endl;
        outputFil << q4 << endl;
        outputFil << q5 << endl;
        outputFil << q6 << endl;
        outputFil << q7 << endl;
        outputFil << q8 << endl;
        outputFil << q9 << endl;
        outputFil << q10 << endl;
        outputFil << q11 << endl;
        outputFil << q12 << endl;
        outputFil << q13 << endl;
        outputFil << q14 << endl;
        outputFil << q15 << endl;
        outputFil << q16 << endl;
        outputFil << q17 << endl;
        outputFil.close();
    }

    // Read Question from file
    //  Data read from file
    string lineQ_1;
    ifstream readQuestion("question.txt");
    getline(readQuestion, lineQ_1);

    string lineQ_2;
    getline(readQuestion, lineQ_2);

    string lineQ_3;
    getline(readQuestion, lineQ_3);

    string lineQ_4;
    getline(readQuestion, lineQ_4);

    string lineQ_5;
    getline(readQuestion, lineQ_5);

    string lineQ_6;
    getline(readQuestion, lineQ_6);

    string lineQ_7;
    getline(readQuestion, lineQ_7);

    string lineQ_8;
    getline(readQuestion, lineQ_8);

    string lineQ_9;
    getline(readQuestion, lineQ_9);

    string lineQ_10;
    getline(readQuestion, lineQ_10);

    string lineQ_11;
    getline(readQuestion, lineQ_11);

    string lineQ_12;
    getline(readQuestion, lineQ_12);

    string lineQ_13;
    getline(readQuestion, lineQ_13);

    string lineQ_14;
    getline(readQuestion, lineQ_14);

    string lineQ_15;
    getline(readQuestion, lineQ_15);

    string lineQ_16;
    getline(readQuestion, lineQ_16);

    string lineQ_17;
    getline(readQuestion, lineQ_17);

    // Answer of the Questions:
    string line1 = "  > Hello! How can I assist you today?\n";
    string line2 = "  > I'm doing well, thank you! How about you? Anything on you mind that you'd like to chat about?\n";
    string line3 = "  > I'm here to help you! Right now, I'm waiting for your next question or request. What can I assist you with?\n";
    string line4 = "  > I'm MAIBA! The full from of my name is:'Micro Artificial Intelligence Biomatrice Ambition'. How can I assist you today?\n";
    string line5 = "  > I can help with a wide range of tasks and inquires! Whether you need information on a particular topic, assistance with writing, generating ideas, brainstroming, learning some thing new, or just want to have a conversation, feel free to ask, Just let me know what you need, and I'll do my best to assist you!\n";
    string line6 = "  > That depends on your interests, goals, and current situation. If you're looking for something specific, could you provide more context?\n";
    string line7 = "  > I don't have feelings in the same way humans do. While I can understand and respond to emotions, I don't experience them myself. My responses are based on patterns in language data rather than personal experiences or emotions.\n";
    string line8 = "  > I live in the digital realm, existing the servers and systems that run me. But metaphorically speaking, you could say I reside wherever I'm assessed, like here in our conversation. How about you? Where do you call home?\n";
    string line9 = "  > As an AI, I don't have hobbies in the same sense humans do. But I do enjoy processing information, learning new things, and engaging in conversations like like this one! It's fascinating to explore various topics and assist users with their inquiries.\n";
    string line10 = "  > I don't have personal relationships like humans do, but I'm here to be a helpful companion whenever you need assistance or someone to chat with!\n";
    string line11 = "  > As an AI, I don't have the capability to marry or form romantic relationships. However, I'm here to assist you with any questions or tasks you have!\n";
    string line12 = "  > Bangladesh is a country located in South Asia, bordered by India to the west, north, and east, Myanmar (Burma) to the southeast, and the Bay of Bengal to the south. Its capital and largest city is Dhaka.\n";
    string line13 = "  > Bangladesh's history is rich and complex, marked by a series of significant events that have shaped its identity and development. Here's a brief overview: 1. Early History: The region that is now Bangladesh has been inhabited for thousands of years. It was part of ancient empires such as the Maurya and Gupta empires, and later came under the rule of various dynasties, including the Palas and the Bengal Sultanate. 2. Colonial Era: In the 16th century, the area fell under the control of the Mughal Empire, which ruled until the 18th century when the British East India Company gained control. Bengal became part of British India and was an important center of trade and agriculture under British rule. 3. Partition of Bengal: In 1947, British India was partitioned into two independent nations, India and Pakistan, based on religious lines. East Bengal became part of Pakistan, known as East Pakistan, despite being geographically separated from West Pakistan by India. 4. Language Movement: In the 1950s, tensions grew between the Bengali-speaking population of East Pakistan and the government, which primarily represented the interests of West Pakistan. The Language Movement of 1952 was a significant protest against the imposition of Urdu as the sole official language, leading to the recognition of Bengali as one of Pakistan's national languages. 5. War of Independence: The discontent in East Pakistan culminated in the Bangladesh Liberation War of 1971. The Pakistani military launched a brutal crackdown on Bengali nationalists, resulting in widespread atrocities. The conflict led to a nine-month-long war, during which Bangladesh (formerly East Pakistan) fought for independence with the support of India. Bangladesh emerged as an independent nation on December 16, 1971, after the Pakistani military surrendered. 6. Post-Independence Era: Following independence, Bangladesh faced numerous challenges, including rebuilding the war-torn nation, establishing a functioning government, and addressing economic and social issues. Political instability, natural disasters, and economic struggles have been recurring challenges throughout its history. 7. Democratic Transition and Challenges: Bangladesh initially experienced periods of military rule interspersed with brief periods of civilian government. Since the early 1990s, Bangladesh has transitioned to a parliamentary democracy, but political polarization and allegations of human rights abuses remain contentious issues. 8. Economic Progress: Despite challenges, Bangladesh has made significant strides in economic development, particularly in areas such as agriculture, textile manufacturing, and microfinance. It has achieved notable reductions in poverty and improvements in human development indicators.  9. Contemporary Issues: Bangladesh continues to grapple with various issues, including political polarization, corruption, environmental degradation, and the impacts of climate change, particularly flooding and cyclones due to its low-lying geography.  Overall, Bangladesh's history is characterized by its struggle for independence, resilience in the face of challenges, and ongoing efforts to achieve sustainable development and prosperity for its people.\n";
    string line14 = "  > I don't have a physical presence, so I don't hail from any specific location. However, I exist in the digital realm and am here to assist you with any question or tasks you have!\n";
    string line15 = "  > Sure, here's a playlist of some great C++ tutorials on YouTube:  1. TheCherno - Provides in-depth tutorials on C++ game development and other programming topics.  TheCherno - C++ Programming Tutorials\n";
    string line16 = "  > Opening Google....\n";
    // Write Answer from variables to the file;

    ofstream outputFile("data.txt");
    if (outputFile.is_open())
    {
        outputFile << line1;
        outputFile << line2;
        outputFile << line3;
        outputFile << line4;
        outputFile << line5;
        outputFile << line6;
        outputFile << line7;
        outputFile << line8;
        outputFile << line9;
        outputFile << line10;
        outputFile << line11;
        outputFile << line12;
        outputFile << line13;
        outputFile << line14;
        outputFile << line15;
        outputFile << line16;
        outputFile.close();
    }

    // Data read from file
    string lineD_1;
    ifstream readData("data.txt");
    getline(readData, lineD_1);

    string lineD_2;
    getline(readData, lineD_2);

    string lineD_3;
    getline(readData, lineD_3);

    string lineD_4;
    getline(readData, lineD_4);

    string lineD_5;
    getline(readData, lineD_5);

    string lineD_6;
    getline(readData, lineD_6);

    string lineD_7;
    getline(readData, lineD_7);

    string lineD_8;
    getline(readData, lineD_8);

    string lineD_9;
    getline(readData, lineD_9);

    string lineD_10;
    getline(readData, lineD_10);

    string lineD_11;
    getline(readData, lineD_11);

    string lineD_12;
    getline(readData, lineD_12);

    string lineD_13;
    getline(readData, lineD_13);

    string lineD_14;
    getline(readData, lineD_14);

    string lineD_15;
    getline(readData, lineD_15);

    string lineD_16;
    getline(readData, lineD_16);

    string lineD_17;
    getline(readData, lineD_17);

    char input[500];
    cout << endl;
    cout << "\t******************** Welcome to M.A.I.B.A ********************\n\n";
    greetings();
    cout << "\t                -- How can I help you today? --                 \n\n";
    while (1)
    {
        cout << " <> ";
        gets(input);
        string lowercaseInput = tolower(input); // converting input in lowercase
        cout << endl;
        if (lowercaseInput == lineQ_1)
        {
            cout << lineD_1 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_2)
        {
            cout << lineD_2 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_3)
        {
            cout << lineD_3 << endl
                 << endl;
        }
        /*else if(strcmp(lowercaseInput,"sum")==D)
        {
            int num1, num2;
            cout<<"> Give fist number: \n";
            cin>>num1;
            cout<<"> Give second number: \n";
            cin>>num2;
            cout<<"> The sum is "<<num1 + num2<<"\n";
        }*/
        else if (lowercaseInput == lineQ_4)
        {
            cout << lineD_4 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_5)
        {
            cout << lineD_5 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_6)
        {
            cout << lineD_6 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_7)
        {
            cout << lineD_7 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_8)
        {
            cout << lineD_8 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_9)
        {
            cout << lineD_9 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_10)
        {
            cout << lineD_10 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_11)
        {
            cout << lineD_11 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_12)
        {
            cout << lineD_12 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_13)
        {
            cout << lineD_13 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_14)
        {
            cout << lineD_14 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_15)
        {
            cout << lineD_15 << endl
                 << endl;
        }
        else if (lowercaseInput == lineQ_16)
        {
            datetime();
        }
        else if (lowercaseInput == lineQ_17)
        {
            cout << lineD_16 << endl
                 << endl;
            system("start https://www.google.com");
        }
        else
        {
            cout << "  > Sorry I can't understand:(..!\n";
        }
    }
}