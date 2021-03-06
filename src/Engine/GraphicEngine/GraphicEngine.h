#ifndef GRAPHICENGINE_H
#define GRAPHICENGINE_H

#include <vector>
#include <string>
#include "Scene.h"
#include "Camera.h"

using namespace std;

namespace Engine
{
    /**
    Moteur de gestion d'affichage
    **/
    class GraphicEngine
    {
        public:
            GraphicEngine(string name,unsigned int w, unsigned int h,unsigned int nbCamera=1,unsigned int nbScene=1);
            virtual ~GraphicEngine();

            /**
            Ajoute une caméra à gérer
            **/
            unsigned int addCamera(Camera *camera);

            /**
            Ajoute une scene à gérer
            **/
            unsigned int addScene(Scene *scene);

            /**
            Ajoute un objet à une scene
            **/
            void addSceneObject(Object *object,unsigned idScene=0);
            void addSceneObject(Object *object,Scene *scene);

            /**
            Met à jour l'affichage
            **/
            void update(Camera *camera);
            void update(unsigned int idCamera=0);
        private:
            /**
            Liste des caméras à gérer
            **/
            vector<Camera*>* camera;

            /**
            Liste des caméras à gérer
            **/
            vector<Scene*>* scene;
    };
}
#endif // GRAPHICENGINE_H
