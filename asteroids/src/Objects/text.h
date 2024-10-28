#pragma once

#include <iostream>
#include "raylib.h"

using namespace std;

namespace Text
{
	const float textSpacing = 10.0f;

	enum class Padding
	{
		tiny = 20,
		small = 30,
		medium = 60,
		big = 90,
		giant = 120
	};

	enum class FontSize
	{
		tiny = 12,
		small = 20,
		medium = 40,
		big = 80,
		giant = 140
	};

	enum class Fonts
	{
		Title1,
		Title2,
		Default
	};

	struct Text
	{
		string content = " ";
		int fontSize = 0;
		Vector2 location;
		Color currentColor;
		Color alt1Color;
		Color alt2Color;
		Fonts font;
	};

	void UnloadFonts();

	//Prints a text
	void DrawText(Text myText);

	//Prints a text that needs a number to print
	void DrawText(Text myText, int score);

	void CenterTextX(Text& text);

	float GetTextWidth(Text text);

	float GetTextHeight(Text text);

	Font GetFont(Fonts font);

	void InitFonts();

	//Create texts
	Text GetText(float x, float y, Fonts font, int fontSize, string content, Color color);

	//If the text is the same and only the color changes at one point, then this is used.
	//color1 is the current color.
	Text GetText(float x, float y, Fonts font, int fontSize, string content, Color color1, Color color2);
};

