//
// Created by Neemaxon on 27.02.2026.
//

#include <any>
#include <vector>
#include <string>
#include <iostream>
#include <utility>

#include <QErrorMessage>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

using namespace std;

void Error_Window(string name, string description, string link) {
    string text = "Error:" + name + ". Description: " + description + ". if link avaliable: " + link;
	cout << "\n" << text << "\n";
}

vector<pair<string, vector<string>>> errors = {
    {
        "0.1",
        vector<string>{
            "name",
            "description",
            "no"
        }
    }
};

int widget(string warning_type, float warning_number) {
    if (warning_type=="error") {
        for (int i = 0; i < errors.size(); i++) {
            if (errors[i].first == to_string(warning_number)) {
                auto &data = errors[i].second;
                Error_Window(data[0], data[1], data[2]);
            }
        }
    }
}