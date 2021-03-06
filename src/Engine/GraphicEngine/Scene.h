#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include "Object.h"

using namespace std;

namespace Engine
{
    typedef enum
    {
        TS_Static,
        TS_Dynamique
    } typeScene;

    class Scene
    {
        public:
            Scene(typeScene type,unsigned int nbObject=50);
            virtual ~Scene();

            /**
            Met à jours l'affichage
            **/
            void update();

            /**
            Ajoute un objet
            **/
            void addObject(Object *object);
        private:

            /**
            Liste des objets à gérer
            **/
            vector<Object*>* object;

            /**
            Type de scène
            **/
            typeScene type;
    };
}
#endif // SCENE_H
