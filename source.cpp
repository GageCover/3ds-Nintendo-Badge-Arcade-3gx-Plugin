void	__Main_Catcher__(MenuEntry *entry)
{
}

void	NineFive_Main_Badge_Arcade_Plays(MenuEntry *entry)
{
	offset = 0x35000000;
	Process::Write32(offset + 0x0F6C64C, 0x0000005F);
	offset = 0;
	data32 = 0;
	data16 = 0;
	data8 = 0;
}

void	OneZero_Main_Badge_Arcade_Plays(MenuEntry *entry)
{
	offset = 0x35000000;
	Process::Write32(offset + 0x0F6C64C, 0x0000000A);
	offset = 0;
	data32 = 0;
	data16 = 0;
	data8 = 0;
}

void	Two_Main_Badge_Arcade_Plays(MenuEntry *entry)
{
	offset = 0x35000000;
	Process::Write32(offset + 0x0F6C64C, 0x00000002);
	offset = 0;
	data32 = 0;
	data16 = 0;
	data8 = 0;
}

void	__(MenuEntry *entry)
{
}

void	__Practice_Catcher__(MenuEntry *entry)
{
}

void	NineNine_Practice_Badges_Collected(MenuEntry *entry)
{
	offset = 0x37000000;
	Process::Write32(offset + 0x01F3E70, 0x00000063);
	offset = 0;
	data32 = 0;
	data16 = 0;
	data8 = 0;
}

void	NineNineNine_Practice_Plays(MenuEntry *entry)
{
	offset = 0x36000000;
	Process::Write32(offset + 0x0CD1384, 0x00000063);
	Process::Write32(offset + 0x032675C, 0x00000063);
	offset = 0;
	data32 = 0;
	data16 = 0;
	data8 = 0;
}

void	One_Practice_Plays(MenuEntry *entry)
{
	offset = 0x36000000;
	Process::Write32(offset + 0x0CD1384, 0x00000002);
	Process::Write32(offset + 0x032675C, 0x00000002);
	offset = 0;
	data32 = 0;
	data16 = 0;
	data8 = 0;
}

void	__(MenuEntry *entry)
{
}

void	__Misc___(MenuEntry *entry)
{
}

void	Control_Badge_Movement__Y__(MenuEntry *entry)
{
	Process::Write32(offset + 0x01124EC, 0x3F800000);
}

