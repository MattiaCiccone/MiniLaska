#pragma once

#include "BACKEND/Headers/laskaTypes.h"
#include "BACKEND/Headers/input.h"
#include "BACKEND/Headers/rules.h"
#include "BACKEND/Headers/errors.h"
#include "BACKEND/Headers/tower.h"
#include "BACKEND/Headers/playableBoard.h"

/********************************METHODS***********************************/
/**
*@brief 		Esegue il comando per la pulizia dello schermo del terminale
*@details 		Viene eseguito un comando diverso in base a quale sistema
*				operativo sta utilizzando l'utente.
**/
void refreshTerminal();