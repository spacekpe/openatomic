/**
 * This file is part of OpenAtomic.
 *
 * OpenAtomic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * OpenAtomic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenAtomic. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef INTROSTATE_H
#define INTROSTATE_H

#include <def/sdl.h>
#include <debug/errorreporter.h>
#include <game/programstate.h>

class CIntroState : public CProgramState
{
public:
    void Init();
	void Cleanup();

	void Pause();
	void Resume();

	void HandleEvents();
	void Update();
	void Draw();

	static CIntroState* Instance() {
		return &m_IntroState;
	}

protected:
	CIntroState() { }

private:
	static CIntroState m_IntroState;
        CErrorReporter er;

	SDL_Surface* bg;
	bool firstFlip;
};

#endif
