# AWS Certified Cloud Practitioner — Practice Test 1

50 questions. Single-answer unless marked **(Choose TWO)**. Answers are in
[Practice-Test-1-Answers.md](Practice-Test-1-Answers.md).

---

**Q1.** Which AWS Cloud characteristic allows a company to automatically increase or decrease compute capacity to match demand?
A) High availability
B) Elasticity
C) Fault tolerance
D) Durability

**Q2.** A company wants to pay only for the compute resources it consumes, with no upfront hardware investment. Which cloud computing benefit does this describe?
A) Trade capital expense for variable expense
B) Increase speed and agility
C) Stop guessing capacity
D) Go global in minutes

**Q3.** Which deployment model involves running some workloads on-premises and connecting them to workloads running in the AWS Cloud?
A) Public cloud
B) Private cloud
C) Hybrid cloud
D) Community cloud

**Q4.** In which cloud service model does the customer manage the operating system and applications, while the provider manages the underlying hardware and virtualization?
A) Software as a Service (SaaS)
B) Platform as a Service (PaaS)
C) Infrastructure as a Service (IaaS)
D) Function as a Service (FaaS)

**Q5.** Which AWS offering is an example of Software as a Service (SaaS)?
A) Amazon EC2
B) Amazon Chime
C) AWS Lambda
D) Amazon VPC

**Q6.** What is the relationship between AWS Regions and Availability Zones?
A) A Region contains one Availability Zone
B) An Availability Zone contains multiple Regions
C) A Region consists of multiple, isolated Availability Zones
D) Regions and Availability Zones are the same thing

**Q7.** A company needs to reduce the latency of content delivered to end users worldwide. Which AWS service should it use?
A) AWS Direct Connect
B) Amazon CloudFront
C) AWS Storage Gateway
D) AWS Snowball

**Q8.** Which pillar of the AWS Well-Architected Framework focuses on the ability to run workloads effectively, gain insight into operations, and continuously improve processes?
A) Security
B) Reliability
C) Operational Excellence
D) Performance Efficiency

**Q9.** How many pillars does the AWS Well-Architected Framework have?
A) Four
B) Five
C) Six
D) Seven

**Q10.** Which AWS Cloud Adoption Framework (CAF) perspective is primarily concerned with aligning IT strategy with business goals?
A) Platform perspective
B) Business perspective
C) Operations perspective
D) Security perspective

**Q11.** A startup wants to launch a global product without investing in physical data centers in every country. Which cloud benefit best supports this?
A) Stop guessing capacity
B) Go global in minutes
C) Increase speed and agility
D) Trade capital expense for variable expense

**Q12.** Which statement correctly differentiates scalability from elasticity?
A) Scalability is automatic; elasticity always requires manual intervention
B) Scalability is the ability to increase capacity as needed; elasticity is the ability to automatically scale capacity up or down based on demand
C) They are identical concepts with no difference
D) Elasticity only applies to storage, scalability only applies to compute

**Q13.** Under the AWS Shared Responsibility Model, which of the following is always the customer's responsibility?
A) Physical security of data centers
B) Patching the hypervisor
C) Configuration of security groups and IAM permissions
D) Maintaining the global network infrastructure

**Q14.** Under the Shared Responsibility Model, AWS is responsible for "security of the cloud." What does this include?
A) Encrypting the customer's application data
B) Managing the customer's IAM users
C) Protecting the hardware, software, and facilities that run AWS services
D) Configuring the customer's VPC route tables

**Q15.** What is the best practice regarding the AWS account root user?
A) Use it for daily administrative tasks
B) Share its credentials with the whole team
C) Enable MFA and avoid using it for everyday tasks
D) Disable MFA to simplify sign-in

**Q16.** Which IAM feature allows you to grant temporary permissions to an AWS service or federated user without sharing long-term credentials?
A) IAM group
B) IAM role
C) IAM policy
D) IAM user

**Q17.** A security team wants to enforce that every IAM user must provide a one-time code from a mobile app in addition to a password when signing in. Which feature should they enable?
A) IAM Access Analyzer
B) Multi-Factor Authentication (MFA)
C) AWS Shield
D) Security groups

**Q18.** Which statement about IAM policies follows the principle of least privilege?
A) Grant AdministratorAccess to all new users by default
B) Grant only the permissions required to perform a specific task
C) Grant full S3 access to every EC2 instance role
D) Disable all permissions boundaries

**Q19.** What is the key difference between a security group and a network ACL (NACL) in a VPC?
A) Security groups are stateless; NACLs are stateful
B) Security groups operate at the instance level and are stateful; NACLs operate at the subnet level and are stateless
C) NACLs can only allow traffic; security groups can only deny traffic
D) There is no difference; they are interchangeable

**Q20.** Which AWS service is used to centrally manage encryption keys used to encrypt data across AWS services?
A) AWS Secrets Manager
B) AWS Key Management Service (KMS)
C) AWS Certificate Manager
D) AWS IAM

**Q21.** A company needs to download AWS compliance reports, such as SOC and PCI-DSS reports, for an upcoming audit. Which service should they use?
A) AWS Artifact
B) AWS Config
C) AWS Trusted Advisor
D) Amazon Inspector

**Q22.** Which AWS service provides a managed Distributed Denial of Service (DDoS) protection service?
A) AWS WAF
B) AWS Shield
C) Amazon GuardDuty
D) AWS Firewall Manager

**Q23.** Which service continuously monitors AWS accounts and workloads for malicious activity using threat intelligence feeds and machine learning?
A) Amazon Inspector
B) Amazon GuardDuty
C) AWS Config
D) AWS CloudTrail

**Q24.** A company wants to filter malicious web traffic, such as SQL injection and cross-site scripting attempts, before it reaches its web application. Which service should it use?
A) AWS Shield Standard
B) AWS WAF
C) Amazon VPC
D) AWS Direct Connect

**Q25.** Which service is best suited to securely store and automatically rotate database credentials used by an application?
A) AWS Secrets Manager
B) Amazon S3
C) AWS CloudHSM
D) AWS IAM

**Q26. (Choose TWO)** Which of the following are valid use cases for AWS Organizations?
A) Consolidated billing across multiple AWS accounts
B) Applying Service Control Policies (SCPs) to restrict account permissions
C) Encrypting data at rest in S3
D) Running containerized applications
E) Monitoring network traffic for DDoS attacks

**Q27.** Which compute service lets you run code without provisioning or managing servers, billing you only for the compute time consumed?
A) Amazon EC2
B) AWS Lambda
C) Amazon Lightsail
D) AWS Elastic Beanstalk

**Q28.** A company wants to automatically add or remove EC2 instances behind a load balancer based on CPU utilization. Which service should it use?
A) AWS Auto Scaling
B) Amazon CloudFront
C) AWS OpsWorks
D) Amazon Route 53

**Q29.** Which AWS service distributes incoming application traffic across multiple EC2 instances in one or more Availability Zones?
A) Amazon Route 53
B) Elastic Load Balancing (ELB)
C) AWS Global Accelerator
D) Amazon CloudFront

**Q30.** Which S3 storage class is designed for long-term archival data that is rarely accessed and can tolerate a retrieval time of up to 12 hours, at the lowest storage cost of all S3 classes?
A) S3 Standard
B) S3 Standard-Infrequent Access
C) S3 Glacier Deep Archive
D) S3 Intelligent-Tiering

**Q31.** Which storage service provides block-level storage volumes that must be attached to a single EC2 instance?
A) Amazon S3
B) Amazon EFS
C) Amazon EBS
D) AWS Storage Gateway

**Q32.** Which storage service provides a scalable, fully managed file system that can be mounted concurrently by multiple EC2 instances?
A) Amazon EBS
B) Amazon EFS
C) Amazon S3
D) Amazon FSx for Windows

**Q33.** A company needs to migrate 200 TB of on-premises data to AWS but has limited internet bandwidth. Which service is best suited for this task?
A) AWS Snowball
B) AWS Direct Connect
C) Amazon S3 Transfer Acceleration
D) AWS DataSync only, over the internet

**Q34.** Which database service is a fully managed, serverless, key-value NoSQL database?
A) Amazon RDS
B) Amazon DynamoDB
C) Amazon Redshift
D) Amazon Aurora

**Q35.** A company needs a managed relational database compatible with MySQL that offers up to 5x the throughput of standard MySQL. Which service should it choose?
A) Amazon DynamoDB
B) Amazon Aurora
C) Amazon Redshift
D) Amazon ElastiCache

**Q36.** Which AWS service is purpose-built for large-scale data warehousing and complex analytical queries?
A) Amazon RDS
B) Amazon Redshift
C) Amazon DynamoDB
D) Amazon Neptune

**Q37.** Which service is used to cache frequently accessed data in memory to reduce load on a database and improve application response times?
A) Amazon ElastiCache
B) Amazon S3
C) AWS Storage Gateway
D) Amazon RDS

**Q38.** Which AWS networking service lets you create a logically isolated section of the AWS Cloud where you can launch resources in a virtual network you define?
A) AWS Direct Connect
B) Amazon VPC
C) Amazon Route 53
D) AWS Transit Gateway

**Q39.** Which service is a scalable Domain Name System (DNS) web service used for domain registration and routing end users to applications?
A) Amazon CloudFront
B) Amazon Route 53
C) Elastic Load Balancing
D) AWS Global Accelerator

**Q40.** A company wants a dedicated, private network connection between its data center and AWS to reduce network costs and increase bandwidth throughput, bypassing the public internet. Which service should it use?
A) AWS VPN
B) AWS Direct Connect
C) Amazon CloudFront
D) AWS Snowmobile

**Q41.** Which service allows you to define and provision AWS infrastructure using declarative JSON or YAML templates?
A) AWS Config
B) AWS CloudFormation
C) AWS Systems Manager
D) AWS OpsWorks

**Q42.** A developer wants to deploy a web application without manually configuring the underlying EC2 instances, load balancer, or Auto Scaling group. Which service abstracts this infrastructure management?
A) AWS Elastic Beanstalk
B) Amazon Lightsail
C) AWS Lambda
D) Amazon ECS

**Q43.** Which pricing model offers the largest discount for EC2 usage in exchange for allowing AWS to reclaim the instance with a two-minute warning?
A) On-Demand Instances
B) Reserved Instances
C) Spot Instances
D) Dedicated Hosts

**Q44.** A company has predictable, steady-state workloads running 24/7 for the next 3 years and wants the lowest possible cost. Which EC2 pricing option is most appropriate?
A) On-Demand Instances
B) Spot Instances
C) Reserved Instances
D) Dedicated Instances billed hourly

**Q45.** Which AWS Free Tier type provides a specified amount of a service free for the first 12 months after account creation?
A) Always Free
B) 12 Months Free
C) Trials
D) Enterprise Free

**Q46.** Which tool helps customers visualize, understand, and manage their AWS costs and usage over time?
A) AWS Budgets
B) AWS Cost Explorer
C) AWS Trusted Advisor
D) AWS Pricing Calculator

**Q47.** Which service allows a company to set custom alerts that notify them when their AWS spending or usage exceeds a defined threshold?
A) AWS Cost Explorer
B) AWS Budgets
C) AWS Cost and Usage Report
D) AWS Billing Console only

**Q48.** A company with 10 AWS accounts wants to combine usage across all accounts to take advantage of volume pricing discounts and receive a single bill. Which feature should it use?
A) AWS Organizations consolidated billing
B) AWS Config aggregator
C) Amazon CloudWatch cross-account dashboards
D) IAM cross-account roles

**Q49.** Which AWS Support plan provides access to a Technical Account Manager (TAM) and a 15-minute response time for business-critical system down issues?
A) Basic
B) Developer
C) Business
D) Enterprise

**Q50.** Which tool provides real-time guidance across cost optimization, performance, security, fault tolerance, and service limits based on AWS best practices?
A) AWS Trusted Advisor
B) AWS Config
C) Amazon Inspector
D) AWS Personal Health Dashboard
