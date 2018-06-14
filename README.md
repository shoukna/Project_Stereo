1.the intrinsics of a camera

> The intrinsic matrix K is used to represent five intrinsic parameters of a camera, including focal length, image sensor format and principal point. 
>
> The parameters  ![\alpha _{{x}}=f\cdot m_{{x}}](https://wikimedia.org/api/rest_v1/media/math/render/svg/3f0b99ce362b84c94a603bca45c11454cb95f6f1) and ![\alpha _{{y}}=f\cdot m_{{y}}](https://wikimedia.org/api/rest_v1/media/math/render/svg/eb5fb4f7aef1abe7c21500f0486677fec1e2ceca)  represent focal length in terms of pixels, where ![m_{{x}}](https://wikimedia.org/api/rest_v1/media/math/render/svg/4cb57f58df35d05556b4050bc309bb0852aa64f1) and ![m_{{y}}](https://wikimedia.org/api/rest_v1/media/math/render/svg/f2f3f6ae6a1261f9543f8cbbd6316736daf7967d)  are the scale factors relating pixels to distance and ![f](https://wikimedia.org/api/rest_v1/media/math/render/svg/132e57acb643253e7810ee9702d9581f159a1c61)   is the focal length in terms of distance. ![\gamma ](https://wikimedia.org/api/rest_v1/media/math/render/svg/a223c880b0ce3da8f64ee33c4f0010beee400b1a)represents the skew coefficient between the x and the y axis, and is often 0. ![u_{{0}}](https://wikimedia.org/api/rest_v1/media/math/render/svg/9c7425f9c7ab645587060423c0af62f8a61fbc65)and ![v_{0}](https://wikimedia.org/api/rest_v1/media/math/render/svg/60faad24775635f4722ccc438093dbbfe05f34ae)represent the principal point, which would be ideally in the centre of the image. 

   the extrinsics of a camera

> The extrinsic parameters define the position of the camera center and the camera's heading in world coordinates.  In extrinsic parameters, T is the position of the origin of the world coordinate system expressed in coordinates of the camera-centered coordinate system. And R is a rotation matrix. The position of the camera expressed in world coordinates  ![C=-R^{{-1}}T=-R^{T}T](https://wikimedia.org/api/rest_v1/media/math/render/svg/f19e012ff28e9a5ad8364c2fed39818c04d0f6ca) 

   camera matrix：

>  camera matrix is a 3×4 matrix which describes the mapping of a pinhole camera from 3D points in the world to 2D points in an image. 

2.

3.

4.

> In OpenCV, distortion is mainly caused by radial and tangential factors.
>
> Due to the characteristics of the optical lens, the camera has a radial distortion in the imaging, two common types of radial distortion are barrel distortion and pincushion distortion.
>
>  And due to the assembly error, the sensor and the optical lens are not completely parallel, so the imaging has a tangential distortion, which always can be determined by two parameters p1, p2.

5.

> What the camera calibration does is  to obtain the camera's intrinsic matrix and extrinsic matrix , and each calibration image's selection and translation matrix. The internal parameters and external parameters can correct the image captured by the camera to obtain a relatively small distortion image.

6.

7.

> function:
>
> 1、void `undistort`(InputArray **src**, OutputArray **dst**, InputArray **cameraMatrix**, InputArray **distCoeffs**, InputArray **newCameraMatrix**=noArray() ) 
>
> > 矫正
>
> 2、FileStorage fs(filename, FileStorage::READ); 
>
> > 导入相机内参和畸变系数矩阵

8.

8.5

> We can not use a single camera to estimate the depth of the pixels, because all the points on the line connecting the camera center point O and the 3D world coordinate point X projected onto the image plane are the same.    
>
> So we can use two cameras, the points on line OX will be projected to different positions on the other image. So based on these two images, we can use triangulation to calculate the distance (depth) from the point in the 3D space to the camera. This is the whole idea.

9.