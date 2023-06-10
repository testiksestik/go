import boto3

def upload_file_to_s3(file_path, bucket_name, s3_key):
    s3 = boto3.client('s3')
    s3.upload_file(file_path, bucket_name, s3_key)
    print("File uploaded successfully to Amazon S3!")

def main():
    file_path = "/path/to/file.txt"
    bucket_name = "my-bucket"
    s3_key = "uploads/file.txt"
    upload_file_to_s3(file_path, bucket_name, s3_key)

if __name__ == "__main__":
    main()
