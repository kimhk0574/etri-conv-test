#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int your_conv( cv::Mat src,
               cv::Mat dst,
               cv::Mat kernel,
               int stride,
               int padding
               )
{
    int src_height = src.rows; //automatically check the source image's row lengths
    int src_width = src.cols; //automatically check the source image's colum lengths

    int kernel_height = kernel.rows; //In this case, 3
    int kernel_width = kernel.cols; //In this case, 3

    int dst_height; //Calculated by padding, stride, source, kernel size parameters (source_height + 2*zero_padding - kernel_height) / (stride) + 1
    int dst_width;

	//row index 0 to $(padding)-1 is zero-padded line, row index 0 to $(padding)-1 is always zero
	//colum index 0 to $(padding)-1 is zero-padded line, row index 0 to $(padding)-1 is always zero

	//dst_height = ((src.rows + (2*padding) - kernel.rows) / stride) + 1;
	//dst_width = ((src.cols + (2*padding) - kernel.cols) / stride) + 1;


    // src.ptr<unsigned char>(i)[ calculate INDEX ]

    // MAKE YOUR OWN CONVOLUTION PROCESS

    // if success
    return 0

    // if fail - in the case of wrong parameters...
    // return -1
}

int main ( int argc, char** argv )
{
    if (argc < 2) {
        std::cout << "no filename given." << std::endl;
        std::cout << "usage: " << argv[0] << " image" << std::endl;
        return -1;
    }

    cv::Mat src, kernel, dst;

    // Load an image
    src = cv::imread( argv[1] );
    if( !src.data )  { return -1; }

    // Make filter
    kernel = (cv::Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);


    // Run 2D filter
    //cv::filter2D(src, dst, -1 , kernel, cv::Point( -1, -1 ), 0, cv::BORDER_DEFAULT );

    // ---------------------------
    your_conv(src,dst,kernel,1,0);
    // ---------------------------

    cv::namedWindow( "filter2D Demo", cv::WINDOW_AUTOSIZE );
    cv::imshow( "filter2D Demo", dst );

    cv::waitKey(0);
    return 0;
}
