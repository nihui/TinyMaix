const unsigned char mel_buf[64*40*1]={\
 76, 103, 110, 104, 109, 113, 119, 107, 108, 106, 101, 119, 116, 120, 121, 123, 119, 124, 126, 121, 111, 118, 121, 117, 117, 117, 124, 124, 122, 133, 129, 126, 124, 128, 128, 129, 132, 132, 125, 119, 
 80,  96, 103, 115, 100, 104, 114, 107, 113, 112, 108, 119, 113, 122, 125, 130, 129, 133, 136, 134, 128, 134, 139, 136, 140, 139, 140, 137, 137, 138, 154, 156, 156, 168, 166, 153, 155, 145, 138, 140, 
 72, 102, 105, 119, 111, 115, 117, 110, 104, 108, 117, 116, 115, 115, 128, 130, 140, 138, 139, 137, 134, 132, 133, 128, 143, 130, 138, 145, 148, 145, 146, 153, 154, 162, 167, 155, 156, 148, 146, 140, 
 57,  97, 109, 112, 109, 111, 120, 110, 113, 112, 101, 112, 112, 125, 132, 130, 133, 127, 126, 123, 126, 125, 126, 120, 126, 131, 137, 140, 134, 144, 141, 140, 148, 150, 154, 147, 147, 144, 142, 130, 
 78, 112, 112, 111, 126, 117, 111, 104, 109, 112, 109, 122, 129, 130, 148, 143, 150, 144, 140, 132, 135, 136, 139, 137, 139, 148, 138, 157, 151, 148, 157, 151, 153, 162, 159, 150, 149, 145, 138, 135, 
 84, 102, 107, 111, 105, 108, 119, 120, 115, 113,  97, 116, 117, 127, 138, 137, 144, 142, 139, 132, 128, 125, 125, 125, 132, 140, 134, 144, 147, 148, 155, 139, 145, 152, 154, 151, 146, 143, 136, 131, 
 82, 100, 100, 105, 108, 109, 101, 104, 101, 101, 108, 116, 121, 121, 133, 134, 125, 126, 126, 128, 126, 124, 121, 123, 126, 126, 131, 137, 133, 136, 138, 142, 136, 135, 142, 142, 136, 132, 130, 119, 
 95, 100,  91,  94, 110, 111, 101, 112, 110, 106, 115, 116, 117, 117, 117, 117, 125, 122, 118, 125, 126, 126, 122, 125, 128, 136, 134, 143, 136, 148, 144, 140, 134, 134, 136, 129, 131, 124, 125, 123, 
 74,  86, 100, 111, 111, 112, 117, 110, 105, 107, 110, 109, 120, 118, 115, 115, 119, 129, 123, 122, 124, 120, 121, 120, 121, 129, 129, 132, 127, 132, 138, 133, 131, 132, 125, 127, 128, 125, 124, 115, 
 66, 100, 102, 107, 119, 116, 115, 113, 110, 112, 109, 117, 116, 120, 115, 122, 132, 132, 132, 131, 128, 129, 133, 132, 134, 142, 141, 149, 144, 154, 160, 158, 152, 150, 143, 146, 147, 142, 142, 137, 
 77,  97, 107, 114, 121, 117, 113, 117, 108, 120, 117, 120, 115, 132, 131, 131, 139, 136, 138, 135, 130, 131, 134, 137, 146, 150, 143, 151, 144, 156, 163, 165, 162, 162, 156, 158, 156, 150, 146, 139, 
 83, 103, 105, 114, 113, 112, 124, 109, 112, 116, 118, 121, 121, 127, 132, 133, 136, 139, 136, 132, 132, 127, 125, 133, 137, 141, 138, 146, 140, 143, 148, 148, 150, 154, 151, 148, 147, 146, 141, 130, 
 85, 102, 101, 100, 109, 114, 115, 115, 110, 109, 111, 114, 119, 119, 127, 126, 131, 137, 131, 131, 132, 123, 125, 130, 129, 132, 135, 143, 141, 140, 148, 147, 145, 146, 140, 136, 136, 138, 134, 125, 
 76,  99,  88,  99, 116, 110, 122, 127, 113, 115, 109, 114, 118, 125, 129, 126, 129, 130, 126, 130, 125, 120, 127, 125, 121, 122, 126, 130, 132, 131, 143, 143, 143, 139, 136, 135, 135, 132, 128, 124, 
 86, 109, 106, 105, 109, 107, 112, 111, 113, 111,  99, 112, 116, 116, 115, 117, 126, 124, 122, 124, 120, 118, 123, 121, 120, 122, 125, 131, 132, 130, 137, 134, 132, 131, 132, 134, 134, 131, 126, 124, 
 79, 104, 103, 112, 115, 103, 112, 115, 109, 113, 104, 111, 120, 122, 120, 116, 120, 123, 120, 118, 122, 121, 117, 123, 120, 121, 120, 127, 125, 128, 134, 131, 129, 131, 132, 130, 128, 128, 123, 121, 
 73,  80, 104, 109, 112, 111, 113, 118, 112, 111, 107, 112, 120, 126, 116, 115, 125, 127, 126, 125, 124, 122, 124, 127, 134, 141, 135, 138, 145, 146, 154, 156, 151, 154, 150, 144, 135, 128, 129, 130, 
 90,  98, 102,  99, 105, 111, 117, 108, 111, 109, 109, 113, 118, 123, 121, 123, 130, 128, 127, 122, 127, 126, 128, 128, 134, 138, 138, 143, 146, 150, 159, 159, 161, 164, 159, 148, 136, 131, 130, 127, 
 89, 105, 105, 107, 107, 110, 125, 116, 114, 105, 110, 116, 119, 121, 128, 133, 131, 132, 137, 127, 131, 130, 130, 130, 134, 134, 139, 143, 141, 146, 154, 154, 156, 159, 152, 140, 131, 129, 130, 123, 
 86, 100, 102, 115, 110, 102, 118, 120, 110,  97, 105, 114, 116, 116, 125, 129, 128, 132, 140, 130, 131, 134, 130, 131, 138, 138, 143, 143, 141, 145, 149, 152, 147, 148, 143, 136, 131, 133, 134, 127, 
 92, 104, 103, 114, 112, 114, 119, 112, 106, 102, 116, 121, 121, 124, 130, 127, 126, 129, 132, 128, 128, 136, 128, 129, 134, 138, 142, 141, 143, 145, 144, 149, 148, 145, 142, 141, 137, 136, 136, 127, 
 99,  97,  90, 103,  98, 101, 111, 121, 112, 124, 141, 140, 138, 145, 146, 137, 134, 140, 144, 146, 140, 142, 131, 132, 138, 147, 150, 154, 160, 160, 158, 160, 157, 152, 150, 151, 145, 141, 140, 132, 
 99, 130, 135, 137, 123, 134, 140, 134, 137, 154, 165, 164, 164, 171, 166, 161, 152, 161, 166, 169, 160, 153, 145, 147, 149, 156, 158, 166, 171, 170, 171, 167, 161, 155, 153, 154, 146, 144, 148, 144, 
122, 151, 157, 170, 157, 162, 170, 168, 175, 186, 190, 193, 196, 200, 192, 193, 189, 192, 193, 196, 192, 183, 181, 183, 183, 185, 186, 195, 196, 195, 199, 189, 176, 170, 167, 165, 157, 159, 169, 169, 
131, 154, 148, 177, 171, 174, 172, 183, 188, 197, 206, 210, 210, 210, 209, 207, 211, 214, 216, 210, 208, 206, 200, 207, 207, 211, 205, 209, 213, 209, 216, 203, 188, 180, 175, 169, 169, 172, 180, 179, 
146, 163, 154, 172, 168, 174, 178, 183, 188, 199, 209, 211, 209, 208, 206, 204, 210, 213, 224, 220, 211, 209, 207, 208, 211, 215, 210, 214, 219, 212, 214, 198, 181, 173, 167, 158, 157, 163, 172, 171, 
151, 167, 159, 171, 164, 175, 183, 186, 189, 200, 209, 209, 205, 203, 202, 201, 202, 206, 227, 228, 214, 210, 208, 202, 209, 212, 207, 212, 217, 211, 210, 195, 177, 173, 170, 163, 163, 169, 175, 170, 
145, 162, 161, 175, 162, 170, 181, 187, 196, 202, 204, 199, 192, 189, 187, 184, 184, 188, 212, 219, 207, 201, 193, 185, 188, 192, 187, 190, 197, 193, 195, 185, 168, 167, 169, 167, 169, 171, 175, 169, 
146, 157, 164, 172, 164, 164, 181, 189, 201, 199, 192, 184, 179, 177, 174, 170, 170, 172, 189, 199, 195, 187, 173, 166, 171, 178, 175, 175, 182, 180, 183, 177, 163, 159, 161, 162, 164, 166, 170, 168, 
151, 155, 168, 165, 173, 167, 192, 196, 201, 193, 182, 175, 173, 173, 170, 167, 168, 167, 176, 184, 189, 184, 168, 162, 173, 182, 180, 179, 186, 185, 186, 179, 167, 162, 164, 165, 167, 167, 171, 170, 
142, 151, 168, 162, 176, 175, 199, 197, 194, 183, 171, 166, 165, 163, 160, 158, 163, 159, 166, 173, 182, 185, 172, 163, 173, 181, 178, 175, 185, 188, 189, 182, 167, 163, 165, 166, 168, 168, 170, 167, 
124, 146, 163, 163, 171, 179, 194, 189, 177, 166, 156, 154, 154, 151, 148, 147, 150, 146, 155, 164, 173, 183, 173, 160, 167, 174, 168, 162, 176, 185, 188, 182, 161, 158, 160, 158, 160, 162, 166, 162, 
117, 144, 163, 163, 167, 173, 182, 176, 156, 140, 139, 135, 138, 132, 134, 134, 139, 134, 146, 149, 158, 175, 166, 150, 157, 168, 159, 153, 168, 178, 188, 185, 157, 149, 148, 143, 147, 156, 161, 148, 
120, 134, 147, 141, 143, 151, 161, 151, 136, 131, 122, 117, 126, 122, 126, 123, 126, 127, 135, 139, 147, 163, 156, 142, 152, 168, 159, 148, 164, 177, 184, 183, 167, 159, 156, 155, 156, 159, 159, 151, 
112, 114, 123, 118, 122, 130, 144, 135, 127, 129, 124, 116, 128, 129, 130, 129, 120, 125, 131, 138, 148, 165, 156, 146, 158, 176, 171, 157, 171, 179, 182, 188, 189, 184, 180, 182, 183, 184, 178, 170, 
 96, 102, 111, 117, 123, 119, 134, 129, 130, 127, 133, 122, 130, 136, 129, 135, 129, 129, 128, 137, 153, 174, 157, 147, 164, 186, 181, 161, 174, 183, 184, 192, 190, 193, 191, 192, 191, 194, 186, 178, 
 88, 108, 111, 115, 120, 111, 131, 131, 130, 119, 126, 122, 126, 133, 128, 133, 134, 128, 127, 135, 155, 178, 157, 151, 169, 189, 181, 158, 175, 191, 191, 193, 186, 191, 192, 193, 188, 188, 182, 178, 
 99, 131, 130, 130, 132, 131, 155, 159, 152, 141, 136, 137, 139, 141, 142, 139, 143, 144, 152, 157, 166, 177, 162, 163, 175, 180, 172, 166, 185, 192, 189, 186, 176, 171, 171, 176, 175, 174, 169, 165, 
117, 149, 157, 160, 159, 163, 179, 183, 183, 181, 169, 163, 161, 160, 160, 155, 165, 172, 177, 178, 173, 167, 164, 166, 171, 168, 163, 170, 185, 181, 178, 174, 165, 153, 152, 156, 159, 159, 158, 152, 
130, 147, 156, 160, 151, 159, 170, 180, 186, 193, 188, 174, 173, 176, 172, 174, 177, 179, 171, 171, 166, 157, 164, 165, 164, 166, 162, 166, 175, 175, 179, 168, 157, 150, 152, 149, 147, 148, 153, 147, 
137, 153, 144, 151, 147, 153, 167, 170, 182, 199, 193, 182, 179, 185, 190, 188, 185, 173, 161, 172, 175, 166, 171, 176, 169, 169, 174, 173, 168, 178, 181, 161, 160, 157, 153, 149, 146, 148, 151, 149, 
112, 136, 138, 147, 148, 151, 160, 164, 181, 197, 192, 174, 173, 187, 188, 176, 167, 161, 160, 157, 156, 159, 161, 169, 170, 166, 168, 168, 163, 172, 177, 163, 159, 161, 165, 165, 161, 161, 161, 157, 
 96, 128, 145, 153, 154, 154, 165, 176, 188, 185, 180, 175, 178, 180, 169, 153, 140, 134, 137, 136, 136, 137, 136, 142, 161, 158, 161, 166, 161, 164, 169, 159, 159, 162, 168, 164, 151, 147, 145, 135, 
129, 142, 152, 158, 159, 165, 182, 194, 189, 172, 174, 175, 169, 155, 143, 140, 134, 132, 131, 137, 139, 133, 133, 133, 136, 137, 144, 155, 154, 152, 158, 154, 151, 152, 157, 153, 141, 141, 143, 134, 
145, 147, 157, 165, 163, 169, 191, 203, 192, 177, 179, 178, 175, 165, 153, 143, 142, 142, 141, 141, 140, 140, 142, 142, 147, 145, 146, 157, 159, 156, 160, 156, 149, 148, 152, 150, 144, 151, 157, 150, 
141, 149, 165, 178, 169, 171, 198, 212, 207, 191, 185, 182, 192, 197, 192, 174, 171, 159, 158, 152, 152, 158, 156, 165, 179, 177, 171, 180, 185, 179, 176, 164, 162, 160, 163, 162, 160, 166, 169, 161, 
155, 166, 168, 180, 174, 178, 200, 213, 212, 196, 186, 177, 183, 187, 200, 200, 195, 179, 177, 170, 168, 169, 164, 175, 182, 186, 183, 194, 202, 198, 192, 176, 166, 164, 166, 168, 170, 175, 174, 167, 
147, 170, 171, 182, 175, 174, 191, 204, 204, 192, 182, 174, 174, 167, 180, 184, 196, 196, 193, 184, 174, 169, 166, 167, 177, 188, 188, 199, 208, 205, 202, 187, 181, 178, 176, 177, 178, 180, 177, 170, 
123, 157, 163, 181, 162, 166, 183, 197, 190, 179, 174, 169, 168, 167, 164, 169, 171, 178, 194, 188, 168, 166, 159, 157, 164, 183, 184, 185, 201, 204, 204, 190, 177, 170, 173, 172, 176, 185, 178, 171, 
125, 151, 170, 170, 165, 165, 178, 195, 169, 162, 151, 141, 143, 147, 143, 142, 148, 157, 180, 179, 165, 154, 148, 142, 151, 165, 167, 164, 182, 193, 192, 181, 159, 149, 146, 145, 152, 164, 164, 159, 
111, 152, 166, 164, 166, 156, 175, 180, 155, 146, 131, 120, 129, 140, 140, 141, 141, 143, 161, 159, 151, 135, 137, 133, 137, 149, 152, 144, 156, 169, 166, 159, 135, 134, 136, 138, 142, 147, 147, 144, 
118, 149, 160, 160, 163, 157, 151, 157, 145, 138, 125, 123, 132, 133, 127, 130, 137, 136, 145, 145, 143, 131, 135, 132, 133, 147, 151, 145, 147, 151, 149, 146, 141, 143, 143, 143, 141, 140, 143, 141, 
113, 139, 143, 148, 143, 133, 130, 149, 139, 132, 119, 118, 126, 125, 125, 134, 137, 133, 133, 136, 136, 133, 134, 132, 131, 145, 146, 147, 145, 143, 147, 146, 140, 142, 139, 136, 136, 137, 140, 139, 
 73, 119, 131, 142, 135, 116, 126, 132, 128, 128, 120, 120, 124, 122, 123, 127, 132, 128, 125, 131, 131, 136, 133, 132, 134, 141, 136, 142, 142, 140, 145, 144, 133, 139, 139, 135, 133, 133, 131, 131, 
 70, 102, 115, 118, 113, 112, 119, 119, 116, 116, 109, 110, 115, 120, 130, 136, 126, 123, 125, 132, 132, 137, 129, 131, 141, 142, 137, 143, 144, 147, 146, 144, 149, 155, 156, 144, 137, 136, 131, 132, 
 77, 112, 116, 134, 118, 107, 125, 127, 121, 118, 112, 116, 119, 121, 130, 135, 143, 134, 131, 129, 125, 128, 122, 131, 140, 141, 143, 147, 149, 156, 150, 148, 155, 160, 164, 152, 149, 149, 138, 136, 
 66, 102, 117, 116, 111, 120, 115, 113, 116, 115, 120, 128, 127, 135, 142, 144, 145, 141, 138, 127, 126, 128, 135, 132, 142, 138, 139, 153, 152, 153, 151, 147, 152, 157, 156, 147, 144, 141, 139, 135, 
 78, 105, 109, 123, 114, 112, 114, 119, 105, 115, 114, 114, 119, 133, 141, 145, 145, 139, 140, 135, 134, 140, 139, 127, 128, 133, 135, 148, 147, 146, 152, 150, 147, 153, 155, 146, 145, 142, 139, 134, 
 81,  91, 110, 113, 116, 105, 100, 115, 106, 101, 104, 124, 127, 131, 139, 139, 136, 130, 128, 127, 124, 121, 116, 124, 121, 119, 123, 131, 137, 144, 139, 138, 134, 140, 142, 135, 134, 132, 129, 123, 
 82,  94, 111, 119, 116, 104, 122, 115, 108, 101,  99, 113, 116, 127, 135, 124, 128, 118, 119, 117, 109, 121, 123, 121, 116, 123, 123, 132, 134, 129, 133, 134, 129, 133, 132, 125, 126, 125, 123, 117, 
 59,  95,  99, 115, 110, 108, 118, 110, 113, 111, 104, 111, 117, 122, 124, 124, 128, 122, 120, 125, 121, 116, 111, 124, 117, 113, 123, 125, 128, 125, 119, 127, 130, 130, 128, 121, 123, 122, 119, 114, 
 68, 105, 108, 112, 109, 110, 107, 105, 104, 110, 111, 114, 118, 127, 123, 117, 111, 114, 122, 122, 110, 112, 118, 115, 114, 117, 124, 131, 128, 118, 125, 132, 132, 130, 128, 123, 125, 122, 119, 115, 
 75,  98, 101, 107, 102, 106, 129, 114, 107,  99, 107, 118, 118, 119, 117, 124, 126, 123, 116, 117, 118, 113, 118, 116, 118, 108, 118, 120, 123, 122, 121, 126, 130, 127, 126, 123, 124, 119, 118, 118, 
 66,  94,  96,  90,  92, 100,  92,  95,  90,  98, 105, 102, 103, 106,  99, 116, 113, 111, 103,  99,  98,  98, 112, 105, 108, 103, 113, 112, 109, 107, 114, 118, 116, 113, 111, 109, 110, 104, 106, 109, 
};