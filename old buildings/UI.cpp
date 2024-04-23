//
// Created by Marius on 4/23/2024.
//

#include "UI.h"
#include "Block.h"
#include "House.h"

void UI::Run() {

    while(true){

        cout<<"1. Add building\n";
        cout<<"2. Print all buildings\n";
        cout<<"3. Write to file the buildings to be demolished & destroyed\n";
        cout<<"0. Exit\n";

        cout<<">>>";
        int input; cin>>input;

        if(!input) break;

        switch(input){

            default: {
                cout<<"Invalid input!\n";
                break;
            }

            case 1: {

                AddBuilding();
                break;
            }

            case 2: {
                PrintBuildings();
                break;
            }

            case 3: {
                WriteToFile();
                break;
            }
        }

    }

}

void UI::AddBuilding() {

    cout<<"1. Add Block\n2. Add House\n";
    int input; cout<<">>>"; cin>>input;

    switch (input) {

        default: {
            cout<<"Invalid input!\n";
            break;
        }

        case 1:
            AddBlock();
            break;

        case 2:
            AddHouse();
            break;
    }
}

void UI::AddBlock() {

    string address; cout<<"Address: "; cin>>address;
    int constructionYear; cout<<"Construction year: "; cin>>constructionYear;
    int totalApartments; cout<<"Total apartments: "; cin>>totalApartments;
    int occupiedApartments; cout<<"Occupied apartments: "; cin>>occupiedApartments;

    controller.AddBuilding(new Block(address,constructionYear,totalApartments,occupiedApartments));

}

void UI::AddHouse() {

        string address; cout<<"Address: "; cin>>address;
        int constructionYear; cout<<"Construction year: "; cin>>constructionYear;
        string type; cout<<"Type: "; cin>>type;
        bool isHistorical; cout<<"Is historical? (1/0): "; cin>>isHistorical;

        controller.AddBuilding(new House(address,constructionYear,type,isHistorical));
}

void UI::PrintBuildings() {

    auto data = controller.GetBuildings();

    for(auto & i : data){
        cout<<i->toString()<<'\n';
    }

}

void UI::WriteToFile() {

    string filename; cout<<"Filename: "; cin>>filename;

    controller.WriteToFile(filename+"_restored.txt",controller.GetBuildingsToBeRestored());
    controller.WriteToFile(filename+"_demolished.txt",controller.GetBuildingsToBeDemolished());

}
