#pragma once

class Image
{
public:
	Image();
	Image(int w, int h);
	~Image() = default;

	int GetWidth();
	int GetHeight();
	void SetWidth(int w);
	void SetHeight(int h);

private:
	int width;
	int height;
};