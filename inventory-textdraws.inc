new Text:inv_background,
    Text:inv_player,
    Text:inv_head_text,
    Text:inv_face_text,
    Text:inv_weapon_text,
    Text:inv_header_inventory,
    Text:inv_header_char,
    Text:inv_close,
    Text:inv_seperator,
    Text:inv_pageleft,
    Text:inv_pageright,
    Text:inv_item_bg,
    Text:inv_use_button,
    Text:inv_drop_button,
    Text:inv_give_button;

new PlayerText:inv_head_model,
    PlayerText:inv_body_text,
    PlayerText:inv_body_model,
    PlayerText:inv_face_model,
    PlayerText:inv_weapon[11],
    PlayerText:inv_inventory[12],
    PlayerText:inv_page,
    PlayerText:inv_item_preview,
    PlayerText:inv_item_data,
    PlayerText:inv_toy_one_text,
    PlayerText:inv_toy_one_model,
    PlayerText:inv_toy_two_text,
    PlayerText:inv_toy_two_model,
    PlayerText:inv_back_text,
    PlayerText:inv_back_model,
    PlayerText:inv_weight;

hook OnGameModeInit() {
    inv_background = TextDrawCreate(323.000000, 62.000000, "_");
	TextDrawFont(inv_background, 1);
	TextDrawLetterSize(inv_background, 0.808332, 39.149990);
	TextDrawTextSize(inv_background, 1199.500000, 524.500000);
	TextDrawSetOutline(inv_background, 1);
	TextDrawSetShadow(inv_background, 0);
	TextDrawAlignment(inv_background, 2);
	TextDrawColor(inv_background, -1);
	TextDrawBackgroundColor(inv_background, 0);
	TextDrawBoxColor(inv_background, 235);
	TextDrawUseBox(inv_background, 1);
	TextDrawSetProportional(inv_background, 1);
	TextDrawSetSelectable(inv_background, 0);

	inv_player = TextDrawCreate(63.000000, 106.000000, "Preview_Model");
	TextDrawFont(inv_player, 5);
	TextDrawLetterSize(inv_player, 0.600000, 2.000000);
	TextDrawTextSize(inv_player, 222.500000, 225.000000);
	TextDrawSetOutline(inv_player, 0);
	TextDrawSetShadow(inv_player, 0);
	TextDrawAlignment(inv_player, 1);
	TextDrawColor(inv_player, -1);
	TextDrawBackgroundColor(inv_player, 0);
	TextDrawBoxColor(inv_player, 255);
	TextDrawUseBox(inv_player, 0);
	TextDrawSetProportional(inv_player, 1);
	TextDrawSetSelectable(inv_player, 0);
	TextDrawSetPreviewModel(inv_player, 101);
	TextDrawSetPreviewRot(inv_player, -10.000000, 0.000000, -4.000000, 1.000000);
	TextDrawSetPreviewVehCol(inv_player, 1, 1);

	inv_head_text = TextDrawCreate(110.000000, 100.000000, "Head");
	TextDrawFont(inv_head_text, 1);
	TextDrawLetterSize(inv_head_text, 0.287499, 1.000000);
	TextDrawTextSize(inv_head_text, -66.500000, -23.000000);
	TextDrawSetOutline(inv_head_text, 1);
	TextDrawSetShadow(inv_head_text, 0);
	TextDrawAlignment(inv_head_text, 2);
	TextDrawColor(inv_head_text, -1);
	TextDrawBackgroundColor(inv_head_text, 0);
	TextDrawBoxColor(inv_head_text, 0);
	TextDrawUseBox(inv_head_text, 0);
	TextDrawSetProportional(inv_head_text, 1);
	TextDrawSetSelectable(inv_head_text, 0);

	inv_face_text = TextDrawCreate(242.000000, 100.000000, "Face");
	TextDrawFont(inv_face_text, 1);
	TextDrawLetterSize(inv_face_text, 0.287499, 1.000000);
	TextDrawTextSize(inv_face_text, -66.500000, -23.000000);
	TextDrawSetOutline(inv_face_text, 1);
	TextDrawSetShadow(inv_face_text, 0);
	TextDrawAlignment(inv_face_text, 2);
	TextDrawColor(inv_face_text, -1);
	TextDrawBackgroundColor(inv_face_text, 0);
	TextDrawBoxColor(inv_face_text, 0);
	TextDrawUseBox(inv_face_text, 0);
	TextDrawSetProportional(inv_face_text, 1);
	TextDrawSetSelectable(inv_face_text, 0);

	inv_weapon_text = TextDrawCreate(178.000000, 318.000000, "WEAPONS");
	TextDrawFont(inv_weapon_text, 1);
	TextDrawLetterSize(inv_weapon_text, 0.358332, 1.450000);
	TextDrawTextSize(inv_weapon_text, 400.000000, 17.000000);
	TextDrawSetOutline(inv_weapon_text, 1);
	TextDrawSetShadow(inv_weapon_text, 0);
	TextDrawAlignment(inv_weapon_text, 2);
	TextDrawColor(inv_weapon_text, -1);
	TextDrawBackgroundColor(inv_weapon_text, 0);
	TextDrawBoxColor(inv_weapon_text, 0);
	TextDrawUseBox(inv_weapon_text, 1);
	TextDrawSetProportional(inv_weapon_text, 1);
	TextDrawSetSelectable(inv_weapon_text, 0);

	inv_header_inventory = TextDrawCreate(387.000000, 64.000000, "INVENTORY");
	TextDrawFont(inv_header_inventory, 1);
	TextDrawLetterSize(inv_header_inventory, 0.404166, 1.299998);
	TextDrawTextSize(inv_header_inventory, 400.000000, 17.000000);
	TextDrawSetOutline(inv_header_inventory, 1);
	TextDrawSetShadow(inv_header_inventory, 0);
	TextDrawAlignment(inv_header_inventory, 2);
	TextDrawColor(inv_header_inventory, -1);
	TextDrawBackgroundColor(inv_header_inventory, 255);
	TextDrawBoxColor(inv_header_inventory, 0);
	TextDrawUseBox(inv_header_inventory, 1);
	TextDrawSetProportional(inv_header_inventory, 1);
	TextDrawSetSelectable(inv_header_inventory, 0);

	inv_header_char = TextDrawCreate(104.000000, 64.000000, "CHARACTER");
	TextDrawFont(inv_header_char, 1);
	TextDrawLetterSize(inv_header_char, 0.404166, 1.299998);
	TextDrawTextSize(inv_header_char, 400.000000, 17.000000);
	TextDrawSetOutline(inv_header_char, 1);
	TextDrawSetShadow(inv_header_char, 0);
	TextDrawAlignment(inv_header_char, 2);
	TextDrawColor(inv_header_char, -1);
	TextDrawBackgroundColor(inv_header_char, 255);
	TextDrawBoxColor(inv_header_char, 0);
	TextDrawUseBox(inv_header_char, 1);
	TextDrawSetProportional(inv_header_char, 1);
	TextDrawSetSelectable(inv_header_char, 0);

	inv_close = TextDrawCreate(575.000000, 60.000000, "X");
	TextDrawFont(inv_close, 2);
	TextDrawLetterSize(inv_close, 0.387499, 1.899999);
	TextDrawTextSize(inv_close, 584.000000, 116.000000);
	TextDrawSetOutline(inv_close, 1);
	TextDrawSetShadow(inv_close, 0);
	TextDrawAlignment(inv_close, 1);
	TextDrawColor(inv_close, -1962934017);
	TextDrawBackgroundColor(inv_close, 255);
	TextDrawBoxColor(inv_close, -16777216);
	TextDrawUseBox(inv_close, 1);
	TextDrawSetProportional(inv_close, 1);
	TextDrawSetSelectable(inv_close, 1);

	inv_seperator = TextDrawCreate(316.000000, 62.000000, "_");
	TextDrawFont(inv_seperator, 1);
	TextDrawLetterSize(inv_seperator, 0.224997, 39.149959);
	TextDrawTextSize(inv_seperator, 217.500000, 0.000000);
	TextDrawSetOutline(inv_seperator, 1);
	TextDrawSetShadow(inv_seperator, 0);
	TextDrawAlignment(inv_seperator, 2);
	TextDrawColor(inv_seperator, -1);
	TextDrawBackgroundColor(inv_seperator, 255);
	TextDrawBoxColor(inv_seperator, 255);
	TextDrawUseBox(inv_seperator, 1);
	TextDrawSetProportional(inv_seperator, 1);
	TextDrawSetSelectable(inv_seperator, 0);

	inv_pageleft = TextDrawCreate(336.000000, 274.000000, "ld_beat:left");
	TextDrawFont(inv_pageleft, 4);
	TextDrawLetterSize(inv_pageleft, 0.600000, 2.000000);
	TextDrawTextSize(inv_pageleft, 17.000000, 17.000000);
	TextDrawSetOutline(inv_pageleft, 1);
	TextDrawSetShadow(inv_pageleft, 0);
	TextDrawAlignment(inv_pageleft, 1);
	TextDrawColor(inv_pageleft, -1);
	TextDrawBackgroundColor(inv_pageleft, 255);
	TextDrawBoxColor(inv_pageleft, 50);
	TextDrawUseBox(inv_pageleft, 1);
	TextDrawSetProportional(inv_pageleft, 1);
	TextDrawSetSelectable(inv_pageleft, 1);

	inv_pageright = TextDrawCreate(545.000000, 274.000000, "ld_beat:right");
	TextDrawFont(inv_pageright, 4);
	TextDrawLetterSize(inv_pageright, 0.600000, 2.000000);
	TextDrawTextSize(inv_pageright, 17.000000, 17.000000);
	TextDrawSetOutline(inv_pageright, 1);
	TextDrawSetShadow(inv_pageright, 0);
	TextDrawAlignment(inv_pageright, 1);
	TextDrawColor(inv_pageright, -1);
	TextDrawBackgroundColor(inv_pageright, 255);
	TextDrawBoxColor(inv_pageright, 50);
	TextDrawUseBox(inv_pageright, 1);
	TextDrawSetProportional(inv_pageright, 1);
	TextDrawSetSelectable(inv_pageright, 1);

	inv_item_bg = TextDrawCreate(496.000000, 307.000000, "_");
	TextDrawFont(inv_item_bg, 1);
	TextDrawLetterSize(inv_item_bg, 0.600000, 8.849996);
	TextDrawTextSize(inv_item_bg, 288.500000, 155.000000);
	TextDrawSetOutline(inv_item_bg, 1);
	TextDrawSetShadow(inv_item_bg, 0);
	TextDrawAlignment(inv_item_bg, 2);
	TextDrawColor(inv_item_bg, -1);
	TextDrawBackgroundColor(inv_item_bg, 255);
	TextDrawBoxColor(inv_item_bg, 230);
	TextDrawUseBox(inv_item_bg, 1);
	TextDrawSetProportional(inv_item_bg, 1);
	TextDrawSetSelectable(inv_item_bg, 0);

	inv_use_button = TextDrawCreate(375.000000, 395.000000, "USE");
	TextDrawFont(inv_use_button, 2);
	TextDrawLetterSize(inv_use_button, 0.262499, 1.450000);
	TextDrawTextSize(inv_use_button, 13.500000, 72.000000);
	TextDrawSetOutline(inv_use_button, 1);
	TextDrawSetShadow(inv_use_button, 0);
	TextDrawAlignment(inv_use_button, 2);
	TextDrawColor(inv_use_button, -1);
	TextDrawBackgroundColor(inv_use_button, 255);
	TextDrawBoxColor(inv_use_button, 9109759);
	TextDrawUseBox(inv_use_button, 1);
	TextDrawSetProportional(inv_use_button, 1);
	TextDrawSetSelectable(inv_use_button, 1);

	inv_drop_button = TextDrawCreate(456.000000, 395.000000, "DROP");
	TextDrawFont(inv_drop_button, 2);
	TextDrawLetterSize(inv_drop_button, 0.262499, 1.450000);
	TextDrawTextSize(inv_drop_button, 13.500000, 72.000000);
	TextDrawSetOutline(inv_drop_button, 1);
	TextDrawSetShadow(inv_drop_button, 0);
	TextDrawAlignment(inv_drop_button, 2);
	TextDrawColor(inv_drop_button, -1);
	TextDrawBackgroundColor(inv_drop_button, 255);
	TextDrawBoxColor(inv_drop_button, -1962934017);
	TextDrawUseBox(inv_drop_button, 1);
	TextDrawSetProportional(inv_drop_button, 1);
	TextDrawSetSelectable(inv_drop_button, 1);

	inv_give_button = TextDrawCreate(536.000000, 395.000000, "GIVE");
	TextDrawFont(inv_give_button, 2);
	TextDrawLetterSize(inv_give_button, 0.262499, 1.450000);
	TextDrawTextSize(inv_give_button, 13.500000, 72.000000);
	TextDrawSetOutline(inv_give_button, 1);
	TextDrawSetShadow(inv_give_button, 0);
	TextDrawAlignment(inv_give_button, 2);
	TextDrawColor(inv_give_button, -1);
	TextDrawBackgroundColor(inv_give_button, 255);
	TextDrawBoxColor(inv_give_button, 35839);
	TextDrawUseBox(inv_give_button, 1);
	TextDrawSetProportional(inv_give_button, 1);
	TextDrawSetSelectable(inv_give_button, 1);
    return 1;
}

hook OnPlayerConnect(playerid) {
    inv_head_model = CreatePlayerTextDraw(playerid, 90.000000, 112.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_head_model, 5);
	PlayerTextDrawLetterSize(playerid, inv_head_model, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_head_model, 41.000000, 41.000000);
	PlayerTextDrawSetOutline(playerid, inv_head_model, 0);
	PlayerTextDrawSetShadow(playerid, inv_head_model, 0);
	PlayerTextDrawAlignment(playerid, inv_head_model, 1);
	PlayerTextDrawColor(playerid, inv_head_model, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_head_model, 230);
	PlayerTextDrawBoxColor(playerid, inv_head_model, 255);
	PlayerTextDrawUseBox(playerid, inv_head_model, 0);
	PlayerTextDrawSetProportional(playerid, inv_head_model, 1);
	PlayerTextDrawSetSelectable(playerid, inv_head_model, 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_head_model, 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_head_model, -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_head_model, 1, 1);

	inv_body_text = CreatePlayerTextDraw(playerid, 110.000000, 160.000000, "Body");
	PlayerTextDrawFont(playerid, inv_body_text, 1);
	PlayerTextDrawLetterSize(playerid, inv_body_text, 0.287499, 1.000000);
	PlayerTextDrawTextSize(playerid, inv_body_text, -66.500000, -23.000000);
	PlayerTextDrawSetOutline(playerid, inv_body_text, 1);
	PlayerTextDrawSetShadow(playerid, inv_body_text, 0);
	PlayerTextDrawAlignment(playerid, inv_body_text, 2);
	PlayerTextDrawColor(playerid, inv_body_text, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_body_text, 0);
	PlayerTextDrawBoxColor(playerid, inv_body_text, 0);
	PlayerTextDrawUseBox(playerid, inv_body_text, 0);
	PlayerTextDrawSetProportional(playerid, inv_body_text, 1);
	PlayerTextDrawSetSelectable(playerid, inv_body_text, 0);

	inv_body_model = CreatePlayerTextDraw(playerid, 90.000000, 174.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_body_model, 5);
	PlayerTextDrawLetterSize(playerid, inv_body_model, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_body_model, 41.000000, 41.000000);
	PlayerTextDrawSetOutline(playerid, inv_body_model, 0);
	PlayerTextDrawSetShadow(playerid, inv_body_model, 0);
	PlayerTextDrawAlignment(playerid, inv_body_model, 1);
	PlayerTextDrawColor(playerid, inv_body_model, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_body_model, 230);
	PlayerTextDrawBoxColor(playerid, inv_body_model, 255);
	PlayerTextDrawUseBox(playerid, inv_body_model, 0);
	PlayerTextDrawSetProportional(playerid, inv_body_model, 1);
	PlayerTextDrawSetSelectable(playerid, inv_body_model, 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_body_model, 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_body_model, -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_body_model, 1, 1);

	inv_face_model = CreatePlayerTextDraw(playerid, 222.000000, 114.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_face_model, 5);
	PlayerTextDrawLetterSize(playerid, inv_face_model, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_face_model, 41.000000, 41.000000);
	PlayerTextDrawSetOutline(playerid, inv_face_model, 0);
	PlayerTextDrawSetShadow(playerid, inv_face_model, 0);
	PlayerTextDrawAlignment(playerid, inv_face_model, 1);
	PlayerTextDrawColor(playerid, inv_face_model, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_face_model, 230);
	PlayerTextDrawBoxColor(playerid, inv_face_model, 255);
	PlayerTextDrawUseBox(playerid, inv_face_model, 0);
	PlayerTextDrawSetProportional(playerid, inv_face_model, 1);
	PlayerTextDrawSetSelectable(playerid, inv_face_model, 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_face_model, 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_face_model, -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_face_model, 1, 1);

	inv_weapon[0] = CreatePlayerTextDraw(playerid, 72.000000, 335.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[0], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[0], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[0], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[0], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[0], 1);
	PlayerTextDrawColor(playerid, inv_weapon[0], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[0], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[0], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[0], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[0], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[0], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[0], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[0], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[0], 1, 1);

	inv_weapon[1] = CreatePlayerTextDraw(playerid, 109.000000, 335.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[1], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[1], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[1], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[1], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[1], 1);
	PlayerTextDrawColor(playerid, inv_weapon[1], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[1], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[1], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[1], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[1], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[1], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[1], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[1], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[1], 1, 1);

	inv_weapon[2] = CreatePlayerTextDraw(playerid, 148.000000, 335.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[2], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[2], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[2], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[2], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[2], 1);
	PlayerTextDrawColor(playerid, inv_weapon[2], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[2], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[2], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[2], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[2], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[2], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[2], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[2], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[2], 1, 1);

	inv_weapon[3] = CreatePlayerTextDraw(playerid, 186.000000, 335.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[3], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[3], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[3], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[3], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[3], 1);
	PlayerTextDrawColor(playerid, inv_weapon[3], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[3], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[3], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[3], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[3], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[3], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[3], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[3], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[3], 1, 1);

	inv_weapon[4] = CreatePlayerTextDraw(playerid, 224.000000, 335.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[4], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[4], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[4], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[4], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[4], 1);
	PlayerTextDrawColor(playerid, inv_weapon[4], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[4], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[4], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[4], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[4], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[4], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[4], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[4], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[4], 1, 1);

	inv_weapon[5] = CreatePlayerTextDraw(playerid, 263.000000, 335.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[5], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[5], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[5], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[5], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[5], 1);
	PlayerTextDrawColor(playerid, inv_weapon[5], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[5], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[5], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[5], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[5], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[5], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[5], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[5], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[5], 1, 1);

	inv_weapon[6] = CreatePlayerTextDraw(playerid, 89.000000, 374.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[6], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[6], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[6], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[6], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[6], 1);
	PlayerTextDrawColor(playerid, inv_weapon[6], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[6], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[6], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[6], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[6], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[6], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[6], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[6], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[6], 1, 1);

	inv_weapon[7] = CreatePlayerTextDraw(playerid, 130.000000, 374.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[7], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[7], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[7], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[7], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[7], 1);
	PlayerTextDrawColor(playerid, inv_weapon[7], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[7], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[7], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[7], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[7], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[7], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[7], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[7], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[7], 1, 1);

	inv_weapon[8] = CreatePlayerTextDraw(playerid, 170.000000, 374.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[8], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[8], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[8], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[8], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[8], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[8], 1);
	PlayerTextDrawColor(playerid, inv_weapon[8], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[8], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[8], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[8], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[8], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[8], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[8], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[8], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[8], 1, 1);

	inv_weapon[9] = CreatePlayerTextDraw(playerid, 209.000000, 374.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[9], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[9], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[9], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[9], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[9], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[9], 1);
	PlayerTextDrawColor(playerid, inv_weapon[9], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[9], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[9], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[9], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[9], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[9], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[9], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[9], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[9], 1, 1);

	inv_weapon[10] = CreatePlayerTextDraw(playerid, 248.000000, 374.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_weapon[10], 5);
	PlayerTextDrawLetterSize(playerid, inv_weapon[10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_weapon[10], 33.000000, 33.000000);
	PlayerTextDrawSetOutline(playerid, inv_weapon[10], 0);
	PlayerTextDrawSetShadow(playerid, inv_weapon[10], 0);
	PlayerTextDrawAlignment(playerid, inv_weapon[10], 1);
	PlayerTextDrawColor(playerid, inv_weapon[10], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weapon[10], 230);
	PlayerTextDrawBoxColor(playerid, inv_weapon[10], 255);
	PlayerTextDrawUseBox(playerid, inv_weapon[10], 0);
	PlayerTextDrawSetProportional(playerid, inv_weapon[10], 1);
	PlayerTextDrawSetSelectable(playerid, inv_weapon[10], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_weapon[10], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_weapon[10], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_weapon[10], 1, 1);

	inv_inventory[0] = CreatePlayerTextDraw(playerid, 333.000000, 89.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[0], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[0], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[0], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[0], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[0], 1);
	PlayerTextDrawColor(playerid, inv_inventory[0], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[0], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[0], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[0], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[0], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[0], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[0], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[0], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[0], 1, 1);

	inv_inventory[1] = CreatePlayerTextDraw(playerid, 392.000000, 89.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[1], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[1], 55.000000, 55.000000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[1], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[1], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[1], 1);
	PlayerTextDrawColor(playerid, inv_inventory[1], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[1], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[1], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[1], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[1], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[1], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[1], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[1], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[1], 1, 1);

	inv_inventory[2] = CreatePlayerTextDraw(playerid, 450.000000, 89.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[2], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[2], 55.500000, 54.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[2], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[2], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[2], 1);
	PlayerTextDrawColor(playerid, inv_inventory[2], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[2], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[2], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[2], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[2], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[2], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[2], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[2], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[2], 1, 1);

	inv_inventory[3] = CreatePlayerTextDraw(playerid, 509.000000, 89.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[3], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[3], 54.000000, 55.000000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[3], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[3], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[3], 1);
	PlayerTextDrawColor(playerid, inv_inventory[3], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[3], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[3], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[3], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[3], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[3], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[3], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[3], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[3], 1, 1);

	inv_inventory[4] = CreatePlayerTextDraw(playerid, 333.000000, 151.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[4], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[4], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[4], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[4], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[4], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[4], 1);
	PlayerTextDrawColor(playerid, inv_inventory[4], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[4], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[4], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[4], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[4], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[4], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[4], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[4], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[4], 1, 1);

	inv_inventory[5] = CreatePlayerTextDraw(playerid, 392.000000, 151.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[5], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[5], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[5], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[5], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[5], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[5], 1);
	PlayerTextDrawColor(playerid, inv_inventory[5], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[5], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[5], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[5], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[5], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[5], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[5], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[5], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[5], 1, 1);

	inv_inventory[6] = CreatePlayerTextDraw(playerid, 451.000000, 151.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[6], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[6], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[6], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[6], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[6], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[6], 1);
	PlayerTextDrawColor(playerid, inv_inventory[6], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[6], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[6], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[6], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[6], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[6], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[6], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[6], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[6], 1, 1);

	inv_inventory[7] = CreatePlayerTextDraw(playerid, 509.000000, 151.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[7], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[7], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[7], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[7], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[7], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[7], 1);
	PlayerTextDrawColor(playerid, inv_inventory[7], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[7], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[7], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[7], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[7], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[7], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[7], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[7], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[7], 1, 1);

	inv_inventory[8] = CreatePlayerTextDraw(playerid, 333.000000, 214.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[8], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[8], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[8], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[8], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[8], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[8], 1);
	PlayerTextDrawColor(playerid, inv_inventory[8], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[8], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[8], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[8], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[8], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[8], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[8], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[8], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[8], 1, 1);

	inv_inventory[9] = CreatePlayerTextDraw(playerid, 392.000000, 214.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[9], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[9], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[9], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[9], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[9], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[9], 1);
	PlayerTextDrawColor(playerid, inv_inventory[9], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[9], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[9], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[9], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[9], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[9], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[9], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[9], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[9], 1, 1);

	inv_inventory[10] = CreatePlayerTextDraw(playerid, 451.000000, 214.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[10], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[10], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[10], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[10], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[10], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[10], 1);
	PlayerTextDrawColor(playerid, inv_inventory[10], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[10], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[10], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[10], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[10], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[10], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[10], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[10], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[10], 1, 1);

	inv_inventory[11] = CreatePlayerTextDraw(playerid, 509.000000, 214.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_inventory[11], 5);
	PlayerTextDrawLetterSize(playerid, inv_inventory[11], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_inventory[11], 55.000000, 55.500000);
	PlayerTextDrawSetOutline(playerid, inv_inventory[11], 0);
	PlayerTextDrawSetShadow(playerid, inv_inventory[11], 0);
	PlayerTextDrawAlignment(playerid, inv_inventory[11], 1);
	PlayerTextDrawColor(playerid, inv_inventory[11], -1);
	PlayerTextDrawBackgroundColor(playerid, inv_inventory[11], 232);
	PlayerTextDrawBoxColor(playerid, inv_inventory[11], 255);
	PlayerTextDrawUseBox(playerid, inv_inventory[11], 0);
	PlayerTextDrawSetProportional(playerid, inv_inventory[11], 1);
	PlayerTextDrawSetSelectable(playerid, inv_inventory[11], 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_inventory[11], 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_inventory[11], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_inventory[11], 1, 1);

	inv_page = CreatePlayerTextDraw(playerid, 414.000000, 277.000000, "Page: ~g~1/2");
	PlayerTextDrawFont(playerid, inv_page, 1);
	PlayerTextDrawLetterSize(playerid, inv_page, 0.400000, 1.100000);
	PlayerTextDrawTextSize(playerid, inv_page, 482.500000, 17.000000);
	PlayerTextDrawSetOutline(playerid, inv_page, 1);
	PlayerTextDrawSetShadow(playerid, inv_page, 0);
	PlayerTextDrawAlignment(playerid, inv_page, 1);
	PlayerTextDrawColor(playerid, inv_page, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_page, 255);
	PlayerTextDrawBoxColor(playerid, inv_page, 0);
	PlayerTextDrawUseBox(playerid, inv_page, 1);
	PlayerTextDrawSetProportional(playerid, inv_page, 1);
	PlayerTextDrawSetSelectable(playerid, inv_page, 0);

	inv_item_preview = CreatePlayerTextDraw(playerid, 337.000000, 306.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_item_preview, 5);
	PlayerTextDrawLetterSize(playerid, inv_item_preview, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_item_preview, 75.500000, 82.000000);
	PlayerTextDrawSetOutline(playerid, inv_item_preview, 0);
	PlayerTextDrawSetShadow(playerid, inv_item_preview, 0);
	PlayerTextDrawAlignment(playerid, inv_item_preview, 1);
	PlayerTextDrawColor(playerid, inv_item_preview, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_item_preview, 228);
	PlayerTextDrawBoxColor(playerid, inv_item_preview, 255);
	PlayerTextDrawUseBox(playerid, inv_item_preview, 0);
	PlayerTextDrawSetProportional(playerid, inv_item_preview, 1);
	PlayerTextDrawSetSelectable(playerid, inv_item_preview, 0);
	PlayerTextDrawSetPreviewModel(playerid, inv_item_preview, 348);
	PlayerTextDrawSetPreviewRot(playerid, inv_item_preview, -5.000000, 1.000000, 61.000000, 1.129999);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_item_preview, 1, 1);

	inv_toy_one_text = CreatePlayerTextDraw(playerid, 242.000000, 160.000000, "Accessory");
	PlayerTextDrawFont(playerid, inv_toy_one_text, 1);
	PlayerTextDrawLetterSize(playerid, inv_toy_one_text, 0.287499, 1.000000);
	PlayerTextDrawTextSize(playerid, inv_toy_one_text, -66.500000, 61.000000);
	PlayerTextDrawSetOutline(playerid, inv_toy_one_text, 1);
	PlayerTextDrawSetShadow(playerid, inv_toy_one_text, 0);
	PlayerTextDrawAlignment(playerid, inv_toy_one_text, 2);
	PlayerTextDrawColor(playerid, inv_toy_one_text, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_toy_one_text, 0);
	PlayerTextDrawBoxColor(playerid, inv_toy_one_text, 0);
	PlayerTextDrawUseBox(playerid, inv_toy_one_text, 0);
	PlayerTextDrawSetProportional(playerid, inv_toy_one_text, 1);
	PlayerTextDrawSetSelectable(playerid, inv_toy_one_text, 0);

	inv_toy_one_model = CreatePlayerTextDraw(playerid, 223.000000, 174.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_toy_one_model, 5);
	PlayerTextDrawLetterSize(playerid, inv_toy_one_model, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_toy_one_model, 41.000000, 41.000000);
	PlayerTextDrawSetOutline(playerid, inv_toy_one_model, 0);
	PlayerTextDrawSetShadow(playerid, inv_toy_one_model, 0);
	PlayerTextDrawAlignment(playerid, inv_toy_one_model, 1);
	PlayerTextDrawColor(playerid, inv_toy_one_model, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_toy_one_model, 230);
	PlayerTextDrawBoxColor(playerid, inv_toy_one_model, 255);
	PlayerTextDrawUseBox(playerid, inv_toy_one_model, 0);
	PlayerTextDrawSetProportional(playerid, inv_toy_one_model, 1);
	PlayerTextDrawSetSelectable(playerid, inv_toy_one_model, 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_toy_one_model, 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_toy_one_model, -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_toy_one_model, 1, 1);

	inv_toy_two_text = CreatePlayerTextDraw(playerid, 242.000000, 219.000000, "Accessory");
	PlayerTextDrawFont(playerid, inv_toy_two_text, 1);
	PlayerTextDrawLetterSize(playerid, inv_toy_two_text, 0.287499, 1.000000);
	PlayerTextDrawTextSize(playerid, inv_toy_two_text, -66.500000, 61.000000);
	PlayerTextDrawSetOutline(playerid, inv_toy_two_text, 1);
	PlayerTextDrawSetShadow(playerid, inv_toy_two_text, 0);
	PlayerTextDrawAlignment(playerid, inv_toy_two_text, 2);
	PlayerTextDrawColor(playerid, inv_toy_two_text, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_toy_two_text, 0);
	PlayerTextDrawBoxColor(playerid, inv_toy_two_text, 0);
	PlayerTextDrawUseBox(playerid, inv_toy_two_text, 0);
	PlayerTextDrawSetProportional(playerid, inv_toy_two_text, 1);
	PlayerTextDrawSetSelectable(playerid, inv_toy_two_text, 0);

	inv_toy_two_model = CreatePlayerTextDraw(playerid, 223.000000, 233.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_toy_two_model, 5);
	PlayerTextDrawLetterSize(playerid, inv_toy_two_model, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_toy_two_model, 41.000000, 41.000000);
	PlayerTextDrawSetOutline(playerid, inv_toy_two_model, 0);
	PlayerTextDrawSetShadow(playerid, inv_toy_two_model, 0);
	PlayerTextDrawAlignment(playerid, inv_toy_two_model, 1);
	PlayerTextDrawColor(playerid, inv_toy_two_model, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_toy_two_model, 230);
	PlayerTextDrawBoxColor(playerid, inv_toy_two_model, 255);
	PlayerTextDrawUseBox(playerid, inv_toy_two_model, 0);
	PlayerTextDrawSetProportional(playerid, inv_toy_two_model, 1);
	PlayerTextDrawSetSelectable(playerid, inv_toy_two_model, 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_toy_two_model, 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_toy_two_model, -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_toy_two_model, 1, 1);

	inv_back_text = CreatePlayerTextDraw(playerid, 110.000000, 220.000000, "Back");
	PlayerTextDrawFont(playerid, inv_back_text, 1);
	PlayerTextDrawLetterSize(playerid, inv_back_text, 0.287499, 1.000000);
	PlayerTextDrawTextSize(playerid, inv_back_text, -66.500000, -23.000000);
	PlayerTextDrawSetOutline(playerid, inv_back_text, 1);
	PlayerTextDrawSetShadow(playerid, inv_back_text, 0);
	PlayerTextDrawAlignment(playerid, inv_back_text, 2);
	PlayerTextDrawColor(playerid, inv_back_text, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_back_text, 0);
	PlayerTextDrawBoxColor(playerid, inv_back_text, 0);
	PlayerTextDrawUseBox(playerid, inv_back_text, 0);
	PlayerTextDrawSetProportional(playerid, inv_back_text, 1);
	PlayerTextDrawSetSelectable(playerid, inv_back_text, 0);

	inv_back_model = CreatePlayerTextDraw(playerid, 90.000000, 234.000000, "Preview_Model");
	PlayerTextDrawFont(playerid, inv_back_model, 5);
	PlayerTextDrawLetterSize(playerid, inv_back_model, 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, inv_back_model, 41.000000, 41.000000);
	PlayerTextDrawSetOutline(playerid, inv_back_model, 0);
	PlayerTextDrawSetShadow(playerid, inv_back_model, 0);
	PlayerTextDrawAlignment(playerid, inv_back_model, 1);
	PlayerTextDrawColor(playerid, inv_back_model, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_back_model, 230);
	PlayerTextDrawBoxColor(playerid, inv_back_model, 255);
	PlayerTextDrawUseBox(playerid, inv_back_model, 0);
	PlayerTextDrawSetProportional(playerid, inv_back_model, 1);
	PlayerTextDrawSetSelectable(playerid, inv_back_model, 1);
	PlayerTextDrawSetPreviewModel(playerid, inv_back_model, 0);
	PlayerTextDrawSetPreviewRot(playerid, inv_back_model, -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, inv_back_model, 1, 1);

	inv_weight = CreatePlayerTextDraw(playerid, 559.000000, 64.000000, "0/25lbs");
	PlayerTextDrawFont(playerid, inv_weight, 1);
	PlayerTextDrawLetterSize(playerid, inv_weight, 0.262499, 0.999998);
	PlayerTextDrawTextSize(playerid, inv_weight, 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, inv_weight, 1);
	PlayerTextDrawSetShadow(playerid, inv_weight, 0);
	PlayerTextDrawAlignment(playerid, inv_weight, 3);
	PlayerTextDrawColor(playerid, inv_weight, -1);
	PlayerTextDrawBackgroundColor(playerid, inv_weight, 255);
	PlayerTextDrawBoxColor(playerid, inv_weight, 0);
	PlayerTextDrawUseBox(playerid, inv_weight, 1);
	PlayerTextDrawSetProportional(playerid, inv_weight, 1);
	PlayerTextDrawSetSelectable(playerid, inv_weight, 0);

	inv_item_data = CreatePlayerTextDraw(playerid, 423.000000, 310.000000, "Name: ~g~Deagle~n~~w~Weight: ~g~4.4lbs~n~~w~Description: ~g~A small, semi-automatic pistol that takes a 9.1mm round.");
	PlayerTextDrawFont(playerid,inv_item_data, 1);
	PlayerTextDrawLetterSize(playerid,inv_item_data, 0.212499, 1.199999);
	PlayerTextDrawTextSize(playerid,inv_item_data, 562.000000, -273.500000);
	PlayerTextDrawSetOutline(playerid,inv_item_data, 1);
	PlayerTextDrawSetShadow(playerid,inv_item_data, 0);
	PlayerTextDrawAlignment(playerid,inv_item_data, 1);
	PlayerTextDrawColor(playerid,inv_item_data, -1);
	PlayerTextDrawBackgroundColor(playerid,inv_item_data, 255);
	PlayerTextDrawBoxColor(playerid,inv_item_data, 128);
	PlayerTextDrawUseBox(playerid,inv_item_data, 1);
	PlayerTextDrawSetProportional(playerid,inv_item_data, 1);
	PlayerTextDrawSetSelectable(playerid,inv_item_data, 0);
    return 1;
}

hook OnPlayerDisconnect(playerid, reason) {
    PlayerTextDrawDestroy(playerid, inv_head_model);
	PlayerTextDrawDestroy(playerid, inv_body_text);
	PlayerTextDrawDestroy(playerid, inv_body_model);
	PlayerTextDrawDestroy(playerid, inv_face_model);
	PlayerTextDrawDestroy(playerid, inv_weapon[0]);
	PlayerTextDrawDestroy(playerid, inv_weapon[1]);
	PlayerTextDrawDestroy(playerid, inv_weapon[2]);
	PlayerTextDrawDestroy(playerid, inv_weapon[3]);
	PlayerTextDrawDestroy(playerid, inv_weapon[4]);
	PlayerTextDrawDestroy(playerid, inv_weapon[5]);
	PlayerTextDrawDestroy(playerid, inv_weapon[6]);
	PlayerTextDrawDestroy(playerid, inv_weapon[7]);
	PlayerTextDrawDestroy(playerid, inv_weapon[8]);
	PlayerTextDrawDestroy(playerid, inv_weapon[9]);
	PlayerTextDrawDestroy(playerid, inv_weapon[10]);
	PlayerTextDrawDestroy(playerid, inv_inventory[0]);
	PlayerTextDrawDestroy(playerid, inv_inventory[1]);
	PlayerTextDrawDestroy(playerid, inv_inventory[2]);
	PlayerTextDrawDestroy(playerid, inv_inventory[3]);
	PlayerTextDrawDestroy(playerid, inv_inventory[4]);
	PlayerTextDrawDestroy(playerid, inv_inventory[5]);
	PlayerTextDrawDestroy(playerid, inv_inventory[6]);
	PlayerTextDrawDestroy(playerid, inv_inventory[7]);
	PlayerTextDrawDestroy(playerid, inv_inventory[8]);
	PlayerTextDrawDestroy(playerid, inv_inventory[9]);
	PlayerTextDrawDestroy(playerid, inv_inventory[10]);
	PlayerTextDrawDestroy(playerid, inv_inventory[11]);
	PlayerTextDrawDestroy(playerid, inv_page);
	PlayerTextDrawDestroy(playerid, inv_item_preview);
	PlayerTextDrawDestroy(playerid, inv_right_arm_text);
	PlayerTextDrawDestroy(playerid, inv_right_arm_model);
	PlayerTextDrawDestroy(playerid, inv_left_arm_text);
	PlayerTextDrawDestroy(playerid, inv_left_arm_model);
	PlayerTextDrawDestroy(playerid, inv_back_text);
	PlayerTextDrawDestroy(playerid, inv_back_model);
	PlayerTextDrawDestroy(playerid, inv_weight);
    return 1;
}