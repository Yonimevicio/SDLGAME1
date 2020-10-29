#include "Globals.h"
#include "Application.h"
#include "ModuleTextures.h"
#include "ModuleScene.h"
#include "ModuleRender.h"
#include "ModuleWindow.h"
#include "SDL/include/SDL.h"

ModuleScene::ModuleScene()
{
	SDL_Texture* img;

}

// Destructor
ModuleScene::~ModuleScene()
{
}

bool ModuleScene::Init()
{
	bool ret = true;
	
	img = App->textures->Load("sprites");
	SDL_Rect* rect = {50, 50, 50, 50};
	
	return ret;
}
update_status ModuleScene::Update() 
{
	App->renderer->Blit(img, NULL, NULL, rect);
	SDL_RenderPresent(renderer);
	return UPDATE_CONTINUE;
}
bool ModuleScene::CleanUp()
{
	bool ret = true;

	return ret;
}