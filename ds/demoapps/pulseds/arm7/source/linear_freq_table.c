#include <nds.h>

const u32 linear_freq_table[] = {
261, 277, 293, 311, 329, 349, 369, 391, 415, 439, 466, 493, 523, 554, 587, 622, 659, 698, 739, 783, 830, 879, 932, 987, 1046, 1108, 1174, 1244, 1318, 1396, 1479, 1567, 1661, 1759, 1864, 1975, 2093, 2217, 2349, 2489, 2637, 2793, 2959, 3135, 3322, 3519, 3729, 3951, 4186, 4434, 4698, 4978, 5274, 5587, 5919, 6271, 6644, 7039, 7458, 7902, 8372, 8869, 9397, 9956, 10548, 11175, 11839, 12543, 13289, 14079, 14917, 15804, 16744, 17739, 18794, 19912, 21096, 22350, 23679, 25087, 26579, 28159, 29834, 31608, 33488, 35479, 37589, 39824, 42192, 44701, 47359, 50175, 53159, 56319, 59668, 63217, 66976, 70958, 75178, 79648, 84384, 89402, 94718, 100350, 106318, 112639, 119337, 126434, 133952, 141917, 150356, 159297, 168769, 178804, 189437, 200701, 212636, 225279, 238675, 252868, 267904, 283835, 300712, 318594, 337538, 357609, 378874, 40140
};