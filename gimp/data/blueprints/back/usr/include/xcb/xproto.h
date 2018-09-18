// GGHASH:VI9n4a2XAA_YVv1RIgJ4eH7z5eo3ujsozN_QtxEXXm2M0005e308
#ifndef __XPROTO_H
#define __XPROTO_H 
#include "xcb.h"
#ifdef __cplusplus
#endif
#define XCB_KEY_PRESS 2
#define XCB_KEY_RELEASE 3
#define XCB_BUTTON_PRESS 4
#define XCB_BUTTON_RELEASE 5
#define XCB_MOTION_NOTIFY 6
#define XCB_ENTER_NOTIFY 7
#define XCB_LEAVE_NOTIFY 8
#define XCB_FOCUS_IN 9
#define XCB_FOCUS_OUT 10
#define XCB_KEYMAP_NOTIFY 11
#define XCB_EXPOSE 12
#define XCB_GRAPHICS_EXPOSURE 13
#define XCB_NO_EXPOSURE 14
#define XCB_VISIBILITY_NOTIFY 15
#define XCB_CREATE_NOTIFY 16
#define XCB_DESTROY_NOTIFY 17
#define XCB_UNMAP_NOTIFY 18
#define XCB_MAP_NOTIFY 19
#define XCB_MAP_REQUEST 20
#define XCB_REPARENT_NOTIFY 21
#define XCB_CONFIGURE_NOTIFY 22
#define XCB_CONFIGURE_REQUEST 23
#define XCB_GRAVITY_NOTIFY 24
#define XCB_RESIZE_REQUEST 25
#define XCB_CIRCULATE_NOTIFY 26
#define XCB_CIRCULATE_REQUEST 27
#define XCB_PROPERTY_NOTIFY 28
#define XCB_SELECTION_CLEAR 29
#define XCB_SELECTION_REQUEST 30
#define XCB_SELECTION_NOTIFY 31
#define XCB_COLORMAP_NOTIFY 32
#define XCB_CLIENT_MESSAGE 33
#define XCB_MAPPING_NOTIFY 34
#define XCB_GE_GENERIC 35
#define XCB_REQUEST 1
#define XCB_VALUE 2
#define XCB_WINDOW 3
#define XCB_PIXMAP 4
#define XCB_ATOM 5
#define XCB_CURSOR 6
#define XCB_FONT 7
#define XCB_MATCH 8
#define XCB_DRAWABLE 9
#define XCB_ACCESS 10
#define XCB_ALLOC 11
#define XCB_COLORMAP 12
#define XCB_G_CONTEXT 13
#define XCB_ID_CHOICE 14
#define XCB_NAME 15
#define XCB_LENGTH 16
#define XCB_IMPLEMENTATION 17
#define XCB_CREATE_WINDOW 1
#define XCB_CHANGE_WINDOW_ATTRIBUTES 2
#define XCB_GET_WINDOW_ATTRIBUTES 3
#define XCB_DESTROY_WINDOW 4
#define XCB_DESTROY_SUBWINDOWS 5
#define XCB_CHANGE_SAVE_SET 6
#define XCB_REPARENT_WINDOW 7
#define XCB_MAP_WINDOW 8
#define XCB_MAP_SUBWINDOWS 9
#define XCB_UNMAP_WINDOW 10
#define XCB_UNMAP_SUBWINDOWS 11
#define XCB_CONFIGURE_WINDOW 12
#define XCB_CIRCULATE_WINDOW 13
#define XCB_GET_GEOMETRY 14
#define XCB_QUERY_TREE 15
#define XCB_INTERN_ATOM 16
#define XCB_GET_ATOM_NAME 17
#define XCB_CHANGE_PROPERTY 18
#define XCB_DELETE_PROPERTY 19
#define XCB_GET_PROPERTY 20
#define XCB_LIST_PROPERTIES 21
#define XCB_SET_SELECTION_OWNER 22
#define XCB_GET_SELECTION_OWNER 23
#define XCB_CONVERT_SELECTION 24
#define XCB_SEND_EVENT 25
#define XCB_GRAB_POINTER 26
#define XCB_UNGRAB_POINTER 27
#define XCB_GRAB_BUTTON 28
#define XCB_UNGRAB_BUTTON 29
#define XCB_CHANGE_ACTIVE_POINTER_GRAB 30
#define XCB_GRAB_KEYBOARD 31
#define XCB_UNGRAB_KEYBOARD 32
#define XCB_GRAB_KEY 33
#define XCB_UNGRAB_KEY 34
#define XCB_ALLOW_EVENTS 35
#define XCB_GRAB_SERVER 36
#define XCB_UNGRAB_SERVER 37
#define XCB_QUERY_POINTER 38
#define XCB_GET_MOTION_EVENTS 39
#define XCB_TRANSLATE_COORDINATES 40
#define XCB_WARP_POINTER 41
#define XCB_SET_INPUT_FOCUS 42
#define XCB_GET_INPUT_FOCUS 43
#define XCB_QUERY_KEYMAP 44
#define XCB_OPEN_FONT 45
#define XCB_CLOSE_FONT 46
#define XCB_QUERY_FONT 47
#define XCB_QUERY_TEXT_EXTENTS 48
#define XCB_LIST_FONTS 49
#define XCB_LIST_FONTS_WITH_INFO 50
#define XCB_SET_FONT_PATH 51
#define XCB_GET_FONT_PATH 52
#define XCB_CREATE_PIXMAP 53
#define XCB_FREE_PIXMAP 54
#define XCB_CREATE_GC 55
#define XCB_CHANGE_GC 56
#define XCB_COPY_GC 57
#define XCB_SET_DASHES 58
#define XCB_SET_CLIP_RECTANGLES 59
#define XCB_FREE_GC 60
#define XCB_CLEAR_AREA 61
#define XCB_COPY_AREA 62
#define XCB_COPY_PLANE 63
#define XCB_POLY_POINT 64
#define XCB_POLY_LINE 65
#define XCB_POLY_SEGMENT 66
#define XCB_POLY_RECTANGLE 67
#define XCB_POLY_ARC 68
#define XCB_FILL_POLY 69
#define XCB_POLY_FILL_RECTANGLE 70
#define XCB_POLY_FILL_ARC 71
#define XCB_PUT_IMAGE 72
#define XCB_GET_IMAGE 73
#define XCB_POLY_TEXT_8 74
#define XCB_POLY_TEXT_16 75
#define XCB_IMAGE_TEXT_8 76
#define XCB_IMAGE_TEXT_16 77
#define XCB_CREATE_COLORMAP 78
#define XCB_FREE_COLORMAP 79
#define XCB_COPY_COLORMAP_AND_FREE 80
#define XCB_INSTALL_COLORMAP 81
#define XCB_UNINSTALL_COLORMAP 82
#define XCB_LIST_INSTALLED_COLORMAPS 83
#define XCB_ALLOC_COLOR 84
#define XCB_ALLOC_NAMED_COLOR 85
#define XCB_ALLOC_COLOR_CELLS 86
#define XCB_ALLOC_COLOR_PLANES 87
#define XCB_FREE_COLORS 88
#define XCB_STORE_COLORS 89
#define XCB_STORE_NAMED_COLOR 90
#define XCB_QUERY_COLORS 91
#define XCB_LOOKUP_COLOR 92
#define XCB_CREATE_CURSOR 93
#define XCB_CREATE_GLYPH_CURSOR 94
#define XCB_FREE_CURSOR 95
#define XCB_RECOLOR_CURSOR 96
#define XCB_QUERY_BEST_SIZE 97
#define XCB_QUERY_EXTENSION 98
#define XCB_LIST_EXTENSIONS 99
#define XCB_CHANGE_KEYBOARD_MAPPING 100
#define XCB_GET_KEYBOARD_MAPPING 101
#define XCB_CHANGE_KEYBOARD_CONTROL 102
#define XCB_GET_KEYBOARD_CONTROL 103
#define XCB_BELL 104
#define XCB_CHANGE_POINTER_CONTROL 105
#define XCB_GET_POINTER_CONTROL 106
#define XCB_SET_SCREEN_SAVER 107
#define XCB_GET_SCREEN_SAVER 108
#define XCB_CHANGE_HOSTS 109
#define XCB_LIST_HOSTS 110
#define XCB_SET_ACCESS_CONTROL 111
#define XCB_SET_CLOSE_DOWN_MODE 112
#define XCB_KILL_CLIENT 113
#define XCB_ROTATE_PROPERTIES 114
#define XCB_FORCE_SCREEN_SAVER 115
#define XCB_SET_POINTER_MAPPING 116
#define XCB_GET_POINTER_MAPPING 117
#define XCB_SET_MODIFIER_MAPPING 118
#define XCB_GET_MODIFIER_MAPPING 119
#define XCB_NO_OPERATION 127
#ifdef __cplusplus
#endif
#endif
